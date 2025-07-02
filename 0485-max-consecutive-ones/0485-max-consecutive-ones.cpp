class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count, max_count = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
            count = 0;
            while (i < nums.size() && nums[i] == 1) {
                count++;
                i++;
            }
            max_count = max(max_count, count);
        }
        return max_count;
    }
};