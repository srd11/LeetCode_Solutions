class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int n=nums.size();
        int ans=0;
        int flip=0;
        int j=0;
        
        for(int i=0;i<n;i++){
            if(nums[i] == 0 ){
                flip++;
            }
            
            while(flip > 1)
            {
                if(nums[j] == 0){
                    flip--;
                }
                j++;
            }
            ans  = max(ans,i-j);
                
        }
        return ans;
    }
};