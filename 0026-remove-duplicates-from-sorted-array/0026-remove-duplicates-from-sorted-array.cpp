class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
      
        int idx=1,curr=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]!=curr){
                nums[idx++]=nums[i];
                curr=nums[i];
            }
        }
        return idx;
    }
};