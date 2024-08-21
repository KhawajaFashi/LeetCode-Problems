class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], profit = 0, buy_index = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (buy > prices[i]) {
                buy = prices[i];
            } else if (prices[i] - buy > profit)
                profit = prices[i] - buy;
        }
        return profit;
    }
};