class Solution {
public:
    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> numIndices;
        for (int i = 0; i < n; ++i) {
            int currentNum = nums[i];
            if (numIndices.find(currentNum) != numIndices.end()) {
                if (i - numIndices[currentNum] <= k) 
                    return true;
            }
            numIndices[currentNum]= i;
        }
        return false;
    }
};