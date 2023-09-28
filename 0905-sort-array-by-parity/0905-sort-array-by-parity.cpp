class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n,0);
        
        int l=0,h=n-1;
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0){
                ans[l++]=nums[i];
            }
            else{
                ans[h--]=nums[i];
            }
        }
        return ans;
    }
};