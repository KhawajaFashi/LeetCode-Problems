class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {}

    void push(int x) { s1.push(x); }

    int pop() {
        while (!s1.empty()) {
            int ele = s1.top();
            s2.push(ele);
            s1.pop();
        }
        int el = s2.top();
        s2.pop();
        while (!s2.empty()) {
            int ele = s2.top();
            s1.push(ele);
            s2.pop();
        }
        return el;
    }

    int peek() {
        while (!s1.empty()) {
            int ele = s1.top();
            s2.push(ele);
            s1.pop();
        }
        int el = s2.top();
        while (!s2.empty()) {
            int ele = s2.top();
            s1.push(ele);
            s2.pop();
        }
        return el;
    }

    bool empty() {
        if (s1.empty())
            return true;
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