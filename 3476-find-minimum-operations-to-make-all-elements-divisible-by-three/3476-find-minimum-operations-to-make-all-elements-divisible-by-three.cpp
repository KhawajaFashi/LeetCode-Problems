class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 3 == 0)
                n--;
        }
        return n;
    }
};