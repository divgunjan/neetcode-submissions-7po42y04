class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for(int price : prices){
            minPrice=min(price, minPrice);
            int profit = price - minPrice;
            maxProfit = max(maxProfit, profit);        
        }
    return maxProfit;
    }
};
