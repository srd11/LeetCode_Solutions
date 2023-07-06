class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX,sum=0;
        int j=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
                sum += nums[i];
            if(sum >= target){
                cout<<sum<<" ";
                ans = min(ans,i-j+1);
                sum -= nums[j++];
            
                while(sum>=target){
                    
                    ans = min(ans,i-j+1);
                    sum -= nums[j++];
                    
                }
            }
        }
    return ans==INT_MAX?0:ans;
    }
};