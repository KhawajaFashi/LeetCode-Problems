class MinStack {
    stack<long long> st;
    long long mini;

public:
    MinStack() { mini = LONG_LONG_MAX; }

    void push(int val) {
        if (st.empty()) {
            mini = val;
            st.push(val);
        } else {
            if (val > mini)
                st.push(val);
            else {
                long long cal = val;
                cal = 2 * cal;
                cal -= mini;
                st.push(cal);
                mini = val;
            }
        }
    }

    void pop() {
        long long popVal = st.top();
        st.pop();
        if (popVal < mini)
            mini = (2 * mini) - popVal;
    }

    int top() {
        if (st.top() > mini)
            return st.top();
        return (int)mini;
    }

    int getMin() { return (int)mini; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */