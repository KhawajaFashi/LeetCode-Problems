class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1, res;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            res = nums[mid];
            if (mid > 0 && mid < nums.size() - 1 && nums[mid - 1] != res &&
                nums[mid + 1] != res)
                return res;
            if (mid > 0 && nums[mid - 1] == res) {
                if ((mid + 1) % 2 == 0)
                    low = mid + 1;
                else
                    high = mid - 1;
            } else if (mid < nums.size() - 1 && nums[mid + 1] == res) {
                if (mid % 2 == 0)
                    low = mid + 1;
                else
                    high = mid - 1;
            } else
                return res;
        }
        return res;
    }
};