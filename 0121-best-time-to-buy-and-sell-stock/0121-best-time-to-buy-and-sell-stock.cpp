class Solution {
public:
    int maxProfit(vector<int>& prices) {
          int n=prices.size();
        int profit=0;
        int l = prices[0],h=prices[0];
        
        for(int i=0;i<n;i++){
            if(prices[i] < l)
            {
                profit=max(profit,h-l);
                l=prices[i];
                h=prices[i];
            }
            else
            {
                h = max(h, prices[i]);
            }
        }
        profit = max(profit,h-l);
        return profit;
    }
};