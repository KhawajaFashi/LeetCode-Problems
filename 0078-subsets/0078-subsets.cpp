class Solution {
public:
    void solve(vector<int> nums, vector<int> output, int i,
               vector<vector<int>>& ans) {
        if (i >= nums.size()) {
            ans.push_back(output);
            return;
        }
        solve(nums, output, i + 1, ans);
        output.push_back(nums[i]);
        solve(nums, output, i + 1, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int i = 0;
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums, output, i, ans);
        return ans;
    }
};