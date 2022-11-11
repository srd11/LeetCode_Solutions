class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int cursum=0;
        int maxsum=INT_MIN;
        
        if(nums.size()==1)
            return nums[0];
        
        for(int i=0;i<nums.size();i++){
            
            cursum += nums[i];
            
            maxsum = max(maxsum , cursum);
        
            if(cursum<0)
                cursum=0;
        }
        return maxsum;

    }
};