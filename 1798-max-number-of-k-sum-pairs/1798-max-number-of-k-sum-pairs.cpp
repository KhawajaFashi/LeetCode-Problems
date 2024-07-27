class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = n - 1; nums[i] >= k && i > 0; i--)
            nums.pop_back();
        n = nums.size();
        int i = 0, j = n - 1, count = 0;
        while (i < j) {
            if (nums[i] + nums[j] == k) {
                count++;
                i++;
                j--;
            } else if (nums[i] + nums[j] > k)
                j--;
            else
                i++;
        }
        return count;
    }
};