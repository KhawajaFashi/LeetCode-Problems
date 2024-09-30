class CustomStack {
public:
    vector<int> arr;
    int size;
    CustomStack(int maxSize) { size = maxSize; }

    void push(int x) {
        if (arr.size() == size)
            return;
        arr.push_back(x);
    }

    int pop() {
        if (arr.size() == 0)
            return -1;
        int val = arr.size() - 1;
        arr.pop_back();
        return arr[val];
    }

    void increment(int k, int val) {
        if (arr.size() == 0)
            return;
        for (int i = 0; i < k && i < arr.size(); i++)
            arr[i] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */