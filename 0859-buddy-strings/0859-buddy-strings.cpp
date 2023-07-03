class Solution {
public:
    bool buddyStrings(string s, string g) {
        
        if(s.size() != g.size())
            return false;
        
        set<char> s1 (s.begin(),s.end());
        if(s1.size() < s.size() && s==g)
            return true;
        
        vector<int> dif;
        for(int i=0;i<s.size();i++){
            if(s[i] != g[i])
                dif.push_back(i);
        }
        
         return dif.size() == 2 && s[dif[0]] == g[dif[1]] && s[dif[1]] == g[dif[0]];
            
        
    }
};