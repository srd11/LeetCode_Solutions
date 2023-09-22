class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size(),j=0;
        for(int i=0;i<n;i++){
            if(t[i] == s[j] ){
                j++;
            }
        }
        if(s.size() == j)
            return true;
        else 
            return false;
    }
};