class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1000000007;
        vector<int> arr;
        int sum;
        for (int i = 0; i < n; i++) {
            int j = i;
            sum = 0;
            while (j < n) {
                sum += nums[j];
                arr.push_back(sum);
                j++;
            }
        }
        sort(arr.begin(), arr.end());
        sum = 0;
        for (int i = left - 1; i < right; i++) {
            sum = (sum + arr[i]) % MOD;
        }
        return sum;
    }
};