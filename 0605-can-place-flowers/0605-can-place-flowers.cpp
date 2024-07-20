class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev = -1;
        if(n==0)
        return true;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0)
                return true;
            return false;
        }
        for (int i = 0; i < flowerbed.size()&&n>0; i++) {
            if ((flowerbed[i] == 0 && i == 1) && prev == 0) {
                n--;
            } else if ((flowerbed[i] == 0 && i == (flowerbed.size() - 1)) &&
                       prev == 0) {
                n--;
            } else if (prev == 0 && flowerbed[i] == 0&&flowerbed[i+1]==0) {
                n--;
                i++;
            }
            prev = flowerbed[i];
        }
        if (n == 0)
            return true;
        return false;
    }
};