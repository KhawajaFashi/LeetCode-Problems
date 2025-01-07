class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
        // int count = 0, max_count = 0, max_num = nums[0];
        // for (int i = 0; i < nums.size() - 1; i++) {
        //     if (nums[i] == nums[i + 1])
        //         count++;
        //     else {
        //         if (max_count < count) {
        //             max_count = count;
        //             max_num = nums[i];
        //             count = 0;
        //         }
        //     }
        // }
        // if (max_count < count) {
        //     max_count = count;
        //     max_num = nums[nums.size() - 1];
        // }
        // return max_num;
    }
};