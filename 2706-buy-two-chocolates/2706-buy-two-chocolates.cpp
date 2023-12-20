class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int n =  prices.size();
        
        int ans=0;
        if(n>=2){
            ans=prices[0]+prices[1];
            if(ans > 0 && ans <= money)
                return money-ans;
            else
                return money;
        }
        return money;
    }
};