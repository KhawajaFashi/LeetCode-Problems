class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size(), zero = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] == 0)
        //         zero++;
        // }
        // if (zero == 0)
        //     return n - 1;
        int left = 0, right = 0, zero_cnt = 0, max = 0, count;
        while (right < n) {
            if (nums[right] == 0)
                zero_cnt++;
            if (zero_cnt > 1) {
                if (nums[left] == 0)
                    zero_cnt--;
                left++;
            }
            count = right - left;
            max = max > count ? max : count;
            right++;
        }
        return max;
    }
};