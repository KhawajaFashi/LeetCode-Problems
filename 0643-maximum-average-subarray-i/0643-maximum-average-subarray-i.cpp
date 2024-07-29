class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        double max = INT_MIN;
        for (int i = 0; i < k; i++)
            sum += nums[i];
        max = sum / k;
        for (int i = k, j = 0; i < n; i++, j++) {
            sum += nums[i];
            sum -= nums[j];
            if ((sum / k) > max)
                max = (sum / k);
        }
        return max;
    }
};