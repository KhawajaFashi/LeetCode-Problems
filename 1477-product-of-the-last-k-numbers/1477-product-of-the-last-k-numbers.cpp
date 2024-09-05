class ProductOfNumbers {
public:
    //vector<int> arr;
    //ProductOfNumbers() {}

    // void add(int num) { arr.push_back(num); }

    // int getProduct(int k) {
    //     int prod = 1;
    //     for (int i = 0, j = arr.size() - 1; j >= 0 && i < k; i++, j--)
    //         prod *= arr[j];
    //     return prod;
    // }
    vector<long long> pr = {1};
    void add(int num) {
        if (num == 0)
            pr = {1};
        else
            pr.push_back(pr.back() * num);
    }
    int getProduct(int k) {
        if (k >= pr.size())
            return 0;
        return pr.back() / pr[pr.size() - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */