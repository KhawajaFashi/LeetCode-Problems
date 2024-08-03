class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0, j, k; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) 
                continue;
            j = i + 1;
            k = nums.size() - 1;
            while (j < k) {
                int total = nums[i] + nums[j] + nums[k];
                if (total == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while (nums[j] == nums[j - 1] && j < k) 
                        j++;
                } else if (total > 0)
                    k--;
                else
                    j++;
            }
        }
        return ans;
    }
};