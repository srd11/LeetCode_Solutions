class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int ans=0;
        int flip=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                flip++;
            }
            
            while(flip > k){
                if(nums[j] == 0)
                    flip--;
                
                j++;      
            }
            ans = max(ans,i-j+1);
        }
        
        return ans;
    }
};