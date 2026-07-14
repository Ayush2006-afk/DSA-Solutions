class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int MaxProfit=0;
        int bestbuy=prices[0];
        for(int i=1;i<n;i++){
            bestbuy=min(bestbuy,prices[i]);
            if(prices[i]>MaxProfit){
                MaxProfit=max(MaxProfit,prices[i]-bestbuy);
            }
            
        }
        return MaxProfit;
    }
};