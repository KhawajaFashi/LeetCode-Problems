class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        // cout << n << endl;
        sort(nums.begin(), nums.end());
        for (int i = n - 1; nums[i] >= k && i > 0; i--) {
            nums.pop_back();
        }
        if (nums.empty() || nums.size() < 2)
            return 0;
        n = nums.size();
        // cout << nums.size() << endl;
        int i = 0, j = n - 1, count = 0;
        while (i < j) {
            if (nums[i] + nums[j] == k) {
                count++;
                i++;
                j--;
            } else if (nums[i] + nums[j] > k) {
                j--;
            } else {
                i++;
            }
        }
        return count;
    }
};