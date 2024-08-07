class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        sort(potions.begin(), potions.end());
        vector<int> arr;
        long long prod;
        long long temp;
        int n = potions.size(), s = 0, mid, e = n - 1;
        for (int i = 0; i < spells.size(); i++) {
            temp = spells[i];
            s = 0, e = n - 1;
            if ((long long)(temp * potions[n - 1]) < success) {
                arr.push_back(0);
                continue;
            }
            while (s < e) {
                mid = s + (e - s) / 2;
                prod = potions[mid] * temp;
                if (prod < success)
                    s = mid + 1;
                else
                    e = mid;
            }
            arr.push_back(n - s);
        }
        return arr;
    }
};