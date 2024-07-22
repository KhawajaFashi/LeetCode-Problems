class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0, j = i + 1; i < n && j < n;) {
            if (nums[i] == 0 && nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            // cout << i<<" " ;
            if (nums[i] != 0) {
                i++;
                j = i + 1;
            } else
                j++;
        }
    }
};