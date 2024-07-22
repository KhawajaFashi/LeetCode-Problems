class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a;
        int prod = 1;
        for (int i = 0; i < nums.size(); i++) {
            a.push_back(prod * nums[i]);
            prod *= nums[i];
        }
        prod = 1;
        for (int i = a.size() - 1; i >= 0; i--) {
            if (i != 0) {
                a[i] = prod * a[i - 1];
                prod *= nums[i];
            } else
                a[i] = prod;
        }
        return a;
    }
};