class Solution {
public:
    
        vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end()); // Sorting the array
        for(int i=0;i<nums.size()-2;i+=3)
        {
            if((nums[i+2]-nums[i])<=k) 
            {
                ans.push_back({nums[i],nums[i+1],nums[i+2]});
            }
            else    
                return {};
        }
        return ans;
    }
    
};