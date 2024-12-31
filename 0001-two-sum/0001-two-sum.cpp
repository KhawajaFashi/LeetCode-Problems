class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int i = 0;
        for (int num : nums) {
            mp[num] = i;
            i++;
        }
        i = 0;
        for (int num : nums) {
            if (mp.contains(target - num) && mp[target - num] != i) {
                return {i, mp[target - num]};
            }
            i++;
        }
        return {};
    }
};