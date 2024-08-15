class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> n;
        int size = nums.size();
        k = k % size;
        for (int i = size - k; i < size; i++)
            n.push_back(nums[i]);
        for (int i = 0; i < size - k; i++)
            n.push_back(nums[i]);
        nums = n;
    }
};