class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] << 10;
            nums[i] = nums[i] | nums[i + n];
        }
        int j = n * 2 - 1, y, x;
        for (int i = n - 1; i >= 0; --i) {
            y = (nums[i]) & ((1 << 10) - 1);
            x = nums[i] >> 10;
            nums[j] = y;
            nums[j - 1] = x;
            j -= 2;
        }

        return nums;
    }
};
