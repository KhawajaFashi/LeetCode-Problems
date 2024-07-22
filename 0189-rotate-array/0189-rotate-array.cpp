class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int v = nums.size();
        vector<int> n;
        int size = nums.size();
        // storing the (k)th index to (size-1)th index elements in the new
        // vector

        k = k % size;
        for (int i = size - k; i < size; i++) {
            n.push_back(nums[i]);
        }

        // storing the remaining elements of the nums in the new;
        for (int i = 0; i < size - k; i++) {
            n.push_back(nums[i]);
        }

        nums = n;
    }
};