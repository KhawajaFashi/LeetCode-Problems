class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maximum = INT_MIN;
        bool check = true;
        for (int num : nums) {
            if (num > 0)
                check = false;
        }
        for (int num : nums) {
            if (check) {
                maximum = maximum < num ? num : maximum;
                continue;
            }
            if (sum + num < 1)
                sum = 0;
            else
                sum += num;
            maximum = maximum < sum ? sum : maximum;
        }
        return maximum;
    }
};