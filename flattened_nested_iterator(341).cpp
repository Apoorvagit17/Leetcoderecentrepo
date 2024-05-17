class NestedIterator(){
    public:
    NestedIterator(vector<NestedInteger> &nestedList){
        this->nestedList = &nestedList;
    }

    int next()
    {
        int n=q.front();
        q.pop_front();
        return n;
    }

    bool hasnext()
    {
        while(q.isempty() && i<nestedList->size)
        {
            if((*nestedList)[i].isInteger())
                 q.push_back((*nestedList)[i].getInteger());
            else
            {
                NestedIterator * it = new NestedIterator((*nestedList)[i].getList());
                while(it->hasNext()) 
                     {
                        q.push_back(it->next());
                     }

            }  
            i++;  
        }
        return !q.isempty();
    }

    private:
    deque<int>q;
    vector<NestedInteger> *nestedList;
    int i=0;
};