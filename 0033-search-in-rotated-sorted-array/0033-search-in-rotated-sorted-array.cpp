class Solution {
public:
    int getPivot(vector<int> nums) {
        int start = 0, end = nums.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] >= nums[0])
                start = mid + 1;
            else
                end = mid;
        }
        return end;
    }
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int mid = getPivot(nums);
        if (target >= nums[mid] && target <= nums[end]) {
            start = mid;
        } else if (target == nums[mid])
            return mid;
        else
            end = mid - 1;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                end = mid - 1;
            } else if (nums[mid] < target)
                start = mid + 1;
        }
        return -1;
    }
};