class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    //     int zerocnt = 0, i = 0, ans = 0;
    // for (int j = 0; j < nums.size(); j++)
    // {
    //     if (nums[j] == 0)
    //     {
    //         zerocnt++;
    //     }
    //     while (zerocnt > k)
    //     {
    //         if (nums[i] == 0)
    //         {
    //             zerocnt--;
    //         }
    //         i++;
    //     }
    //     ans = max(ans, j - i + 1);
    // }
    // return ans;
    int zeros = 0, left = 0, right = 0, maxi = 0, count;
    while (right < nums.size())
    {
        if (zeros > k)
        {
            if (nums[left] == 0)
                zeros--;
                
            left++;
        }
        if (nums[right] == 0)
            zeros++;
        count = right - left+1;
        if (zeros <= k)
            maxi = max(count, maxi);
        right++;
    }
    return maxi;
    }
};