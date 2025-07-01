// if black area is less or equal then we move on
// if black area is greater than we add the calculated water to total water
// if black area is less or equal then we add the greater  - small one between
// i-1 and i

class Solution { // 0 ms, faster than 100.00%
public:
    int trap(vector<int>& height) {
        if (height.size() <= 2)
            return 0;
        int n = height.size(), maxLeft = height[0], maxRight = height[n - 1];
        int left = 1, right = n - 2, ans = 0;
        while (left <= right) {
            if (maxLeft < maxRight) {
                if (height[left] > maxLeft)
                    maxLeft = height[left];
                else
                    ans += maxLeft - height[left];
                left += 1;
            } else {
                if (height[right] > maxRight)
                    maxRight = height[right];
                else
                    ans += maxRight - height[right];
                right -= 1;
            }
        }
        return ans;
    }
};