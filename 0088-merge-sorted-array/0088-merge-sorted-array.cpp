class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int count = 0, zero = 0;
        for (int i = nums1.size() - 1; i >= 0; i--) {
            if (nums1[i] > 0 || nums1[i] < 0)
                break;
            zero++;
        }
        for (int i = 0, j = 0; i < nums1.size() && j < nums2.size(); i++) {
            if (i >= (n + m - zero + count)) {
                nums1[i] = nums2[j];
            }
            if (nums1[i] >= nums2[j]) {
                count++;
                int ans = nums2[j];
                nums1.insert(nums1.begin() + i, ans);
                j++;
            }
        }
        for (int i = 0, j = (n + m) - 1; i < count; i++) {
            nums1.erase(nums1.end() - 1);
        }
    }
};