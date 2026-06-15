class MyQueue {
    
    stack<int>s1,s2;

public:

    MyQueue() {
        
    }

    void push(int x) {
        if(s1.empty() && s2.empty())s1.push(x);
        else{
            if(!s1.empty()){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                s1.push(x);
                while(!s2.empty()){
                    s1.push(s2.top());
                    s2.pop();
                }
            }
            // else if(!s2.empty()){
            //     while(!s2.empty()){
            //         s1.push(s2.top());
            //         s2.pop();
            //     }
            //     s2.push(x);
            //     while(!s1.empty()){
            //         s2.push(s1.top());
            //         s1.pop();
            //     }
            // }
        }
    }

    int pop() {
        int a=NULL;
        if(!s1.empty()){
            a=s1.top();
            s1.pop();
        }
        else if(!s2.empty()){
            a=s2.top();
            s2.pop();
        }
        return a;
    }

    int peek() {
        if(!s1.empty())return s1.top();
        else if(!s2.empty())return s2.top();
        return NULL;
    }

    bool empty() {
        if(s1.empty() && s2.empty())return true;
        return false;
    }

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */