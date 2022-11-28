class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
     set<int> s;
     unordered_map<int,int> mp;
     int n=matches.size();
        for(int i=0;i<n;i++){
            s.insert(matches[i][0]);
            s.insert(matches[i][1]);
            mp[matches[i][1]]++;
        }
        
        vector<vector<int>> ans(2);
        
        for(auto it:s){
            if(mp[it]==1)
                ans[1].push_back(it);
            if(mp[it]==0)
                ans[0].push_back(it);
        }
        return ans;
    }
};