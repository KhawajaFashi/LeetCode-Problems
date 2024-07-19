class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
    {
        return 0;
    }
    if(x==1||x==2||x==3)
    return 1;
    int low = 0, high = x / 2, mid,ans;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (mid == x/mid)
        {
            return mid;
        }
        else if (mid > x/mid)
        {
            high = mid - 1;
        }
        else{
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
    }
};