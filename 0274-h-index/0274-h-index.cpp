class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        
        vector<int> nums(n+1,0);
        
        for(int i=0;i<n;i++){
            if(citations[i] <= n)
                nums[citations[i]]++;   
            else
                nums[n]++;
        }
        
        int ans=0;
        
        for(int i=n;i>=0;i--){
            ans += nums[i];
        

            if(ans >= i)
            {
                return i;
            }
        }
        return ans;
    }
};