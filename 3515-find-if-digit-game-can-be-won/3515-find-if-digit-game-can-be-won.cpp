class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int num1 = 0, num2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 10)
                num1 += nums[i];
            else
                num2 += nums[i];
        }
        return num1 != num2;
    }
};