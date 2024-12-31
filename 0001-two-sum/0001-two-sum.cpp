class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int i = 0;
        for (int num : nums) {
            if (mp.contains(target - num)) {
                return {i, mp[target - num]};
            }
            mp[num] = i;
            i++;
        }
        return {};
    }
};