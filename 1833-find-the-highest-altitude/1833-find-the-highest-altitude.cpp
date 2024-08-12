class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size(), sum = 0, max = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + gain[i];
            max = max > sum ? max : sum;
        }
        return max;
    }
};