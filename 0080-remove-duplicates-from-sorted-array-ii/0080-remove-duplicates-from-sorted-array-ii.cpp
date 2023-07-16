class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int cnt=1,curr=nums[0],idx=1;
        for(int i=1;i<n;i++){
            if(nums[i] == curr && cnt<2)
            {
                cnt++;
                nums[idx++]=curr;
                // idx=i+1;
            }
            else if(nums[i] != curr){
                cnt=1;
                nums[idx++]=nums[i];
                curr=nums[i];
            }
        }
        return idx;
    }
};