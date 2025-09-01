class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prof=0, bestbuy = prices[0];
        for (int i=0; i<size(prices);i++){
            if(prices[i]>bestbuy){
                max_prof=max(max_prof,(prices[i]-bestbuy));
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return max_prof;
    }
};