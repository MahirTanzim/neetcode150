
class MinStack {
    stack <pair <int,int>> st;
    int min_val;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()) st.push({val, val});
        else st.push({val, min(st.top().second, val)});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};


class MinStack {
    stack <int> st;
    stack <int> mins;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mins.empty() || mins.top() >= val) mins.push(val);
    }
    
    void pop() {
        if(st.top() == mins.top()) mins.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mins.top();
    }
};