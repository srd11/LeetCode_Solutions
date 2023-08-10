class Solution {
public:
      bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ind = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        ind--;
        if(ind < 0)return false;
        return nums[ind] == target;
    }
};