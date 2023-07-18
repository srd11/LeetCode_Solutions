class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> mp,mp1;
        vector<int> ans;
        for(auto i:nums){
            if(++mp[i] > nums.size()/3)
            {
                if(mp1.find(i) == mp1.end())
                {
                    mp1[i]++;
                }
            }
        }
        
        for(auto i : mp1)
            ans.push_back(i.first);
        
        return ans;
    }
};