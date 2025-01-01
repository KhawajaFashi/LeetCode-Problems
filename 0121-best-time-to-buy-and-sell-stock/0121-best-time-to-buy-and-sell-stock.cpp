class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int maxi = 0;
        for (int i = 0; i < prices.size(); i++) {
            int profit = prices[i] - mini;
            maxi = profit > maxi ? profit : maxi;
            mini = prices[i] < mini ? prices[i] : mini;
        }
        return maxi;
    }
};