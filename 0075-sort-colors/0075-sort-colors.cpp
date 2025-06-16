class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        for (int i = 0; i <= high; i++) {
            while (low < nums.size() && nums[low] == 0)
                low++;
            while (high > i && nums[high] == 2)
                high--;
            if (i < high && (nums[i] == 2 || nums[i] > nums[high]))
                swap(nums[i], nums[high]);
            if (i > low && (nums[i] == 0 || nums[i] < nums[low]))
                swap(nums[i], nums[low]);
        }
    }
};