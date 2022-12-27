class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int i,minJump=0;
        
        for(int i=nums.size()-2;i>=0;i--){
            minJump++;
            if(nums[i] >= minJump)
                minJump=0;
        }
        
        return minJump==0?true:false;
    }
};