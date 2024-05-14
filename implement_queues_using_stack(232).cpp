class MyQueue {
public:
stack<int> stack1;
stack<int> stack2;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack1.push(x);
    }
    
    int pop() {
        if(stack1.empty() && stack2.empty()){
            return -1;
        }
        if(stack2.empty())
        {
           while(!stack1.empty())
           {
            stack2.push(stack1.top());
            stack1.pop();
           }
        }

        int x= stack2.top();
        stack2.pop();
        return x;
        
    }
    
    int peek() {
         if(stack1.empty() && stack2.empty()){
            return -1;
        }
        if(stack2.empty())
        {
        while(!stack1.empty())
        {
           stack2.push(stack1.top());
           stack1.pop();
        }
        }
        
        return stack2.top();
        
    }
    
    bool empty() {
        return(stack1.empty() && stack2.empty());
    }
};