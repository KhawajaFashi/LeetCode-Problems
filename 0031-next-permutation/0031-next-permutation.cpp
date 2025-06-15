class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), pivot = -9999;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]){
                pivot = i;
                break;
            }
        }
        if (pivot == -9999) {
            sort(nums.begin(), nums.end());
            return;
        }
        int successor = pivot;
        for (int i = pivot; i < n; i++) {
            if (nums[i] > nums[pivot])
                successor = i;
        }
        swap(nums[pivot], nums[successor]);
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};