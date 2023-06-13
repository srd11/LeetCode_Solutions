class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mp;
        
        int n = grid.size();
        int m = grid[0].size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            mp[grid[i]]++;
         }
        
        for(int i=0;i<m;i++){
            vector<int> tmp;
            for(int j=0;j<n;j++){
                tmp.push_back(grid[j][i]);
            }
            ans += mp[tmp];
            
            
        }
        return ans;
    }
};