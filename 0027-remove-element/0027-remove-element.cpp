class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for (int i = 0, j = n - 1; i < j; i++) {
            while (i < j && nums[j] == val)
                j--;
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                j--;
            }
        }
        int count;
        for (count = 0; count < n && nums[count] != val; count++)
            ;
        return count;
    }
};