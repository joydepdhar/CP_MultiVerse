class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price); // Track the minimum price so far
            maxProfit = max(maxProfit, price - minPrice); // Calculate the best profit
        }

        return maxProfit;
    }
};
