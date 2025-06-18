class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0)
            return;
        if (m == 0)
            nums1 = nums2;
        int i, j, k;
        for (k = m - 1, j = m + n - 1, i = n - 1; i >= 0 && k >= 0;) {
            if (nums1[k] <= nums2[i]) {
                nums1[j] = nums2[i];
                j--;
                i--;
            } else {
                swap(nums1[k], nums1[j]);
                k--;
                j--;
            }
        }
        while (i >= 0) {
            nums1[i] = nums2[i];
            i--;
        }
    }
};