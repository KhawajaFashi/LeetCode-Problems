class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), sum = 0, sum_max = INT_MIN;
        for (int i = 0; i < n; i++) {
            sum = max(nums[i] + sum, nums[i]);
            sum_max = max(sum, sum_max);
        }
        return sum_max;
    }
};