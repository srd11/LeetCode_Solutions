class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        
        int i=0,j=0,cumsum=0;
        
        for(auto it:nums)
            cumsum+=it;
        
        int res=INT_MAX;
        int target=cumsum-x;
        int sum=0;
        while(j<n){
            sum+=nums[j];
            while(i<=j && sum>target){
                sum-=nums[i];
                i++;
            }
            if(sum==target){
                res=min(res,n-(j-i+1));
            }
            j++;
        }
        if(res==INT_MAX)return -1;
        return res;
    }
};
