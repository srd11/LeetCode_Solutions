class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n = g.size();
        int m = s.size();
        int  i=0,j=0,ans=0;
        while(i<m && j<n){
            if(s[i] >= g[j])
                j++;
            
            i++;
        }
        return j;
    }
};