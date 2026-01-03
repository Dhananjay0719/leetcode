class MinStack {
    stack<int>s,mintrack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(mintrack.empty() || val<=mintrack.top()) mintrack.push(val);
    }
    
    void pop() {
        int temp=s.top();
        s.pop();
        if(temp==mintrack.top())
        mintrack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mintrack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */