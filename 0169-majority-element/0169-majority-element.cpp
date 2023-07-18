class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> mp;
        
        for(auto i : nums){
            mp[i]++;
        }
        int ans = mp.begin()->first;
        int cnt = mp.begin()->second;
        for(auto i : mp ){
            if (i.second > cnt)
            {
                ans = i.first;
                cnt = i.second;
            }
        }
        
        return ans;
    }
};