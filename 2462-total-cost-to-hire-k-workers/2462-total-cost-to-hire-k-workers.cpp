class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long int ans=0;
        
        // priority_queue<int> p1;
        // priority_queue<int> p2;
        //        priority_queue<int,vector<int>,greater<int>> pq1,pq2;
        priority_queue<int,vector<int>,greater<int>> p1,p2;
        
        int  n = costs.size();
        int l=0,h=n-1;
        while(k != 0){
            
            while(p1.size()<candidates && l<=h) 
                p1.push(costs[l++]);
            while(p2.size()<candidates && h>=l)
                p2.push(costs[h--]);
            
            int a = p1.size()>0?p1.top():INT_MAX;
            int b = p2.size()>0?p2.top():INT_MAX;
            
            if(a<=b){
                ans += a;
                p1.pop();
            }
            else{
                ans+=b;
                p2.pop();
            }
            
            k--;
            
        }
        return ans;
    }
};