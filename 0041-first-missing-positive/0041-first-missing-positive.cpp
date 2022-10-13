class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        std::vector<int>::iterator it;
        it = std::find(nums.begin(),nums.end(),1);
        if(it==nums.end())
            return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]>=2 && nums[i]>=1 && nums[i-1]>=1){
                return ++nums[i-1];
            }
        }
        // int size = nums.size()
        return ++nums[nums.size()-1];
    }
};