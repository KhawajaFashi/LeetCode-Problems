class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1, mid = low + (high - low) / 2;
        while (low <= high) {
            mid = low + (high - low) / 2;
            int res = nums[mid], low_num = nums[low], high_num = nums[high];
            if (res == target)
                return mid;
            if (res >= low_num) {
                if (low_num <= target && target <= res)
                    high = mid - 1;
                else
                    low = mid + 1;

            } else {
                if (res <= target && target <= high_num)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};