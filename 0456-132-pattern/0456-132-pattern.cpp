class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> numbers;
        stack<int> minimum;
        int min = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            while (!numbers.empty() && numbers.top() <= nums[i]) {
                numbers.pop();
                minimum.pop();
            }
            if (!numbers.empty() && nums[i] > minimum.top())
                return true;
            numbers.push(nums[i]);
            minimum.push(min);
            min = min < nums[i] ? min : nums[i];
        }
        return false;
    }
};