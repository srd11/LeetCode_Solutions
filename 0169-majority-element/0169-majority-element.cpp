class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
       int cnt=0;
        int candidate = nums[0];
        
        for(int  i : nums){
            if(cnt == 0)
                candidate = i;
            
            if(i == candidate)
                cnt++;
            
            else
                cnt--;
        }   
    return candidate;
    }
};