class Solution{
    public :
    string simplifying_Path(string path)
    {
        vector<string> result;
        stack<string> stack;
        n=path.size();
        for(int i=0;i<n;i++){
            if(path[i]=="/"){
                continue;
            }
            string current;
            while(i<n && path[i]!="/"){
                current=current+path[i++];
            }
        result.push_back(current);
        }

        for(auto str:result){
            if(str==".")
            continue;
        else if(str==".."){
            if(stack.size()!=0)
            stack.pop();
        }
        else
        stack.push(str);
        }

        string ans;
        while(stack.size()!=0){
            ans="/"+stack.top()+ans;
        }
        if(ans.size()==0)
        return "/";
        else
        return ans;

    }
}