class MinStack {
public:
    vector<int> v;
    vector<int>mini;
    MinStack() {
        
    }
    
    void push(int value) {
        v.push_back(value);
         if (mini.empty() || value <= mini.back())
        mini.push_back(value);
    }
    
    void pop() {
         if (v.back() == mini.back())
        mini.pop_back();
            v.pop_back();
    }
    
    int top() {
        return v.back();
        }
    
    
    int getMin() {
       
        return mini.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */