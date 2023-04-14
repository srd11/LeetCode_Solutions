class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<vector<int>> dp (s.size() + 1, vector<int> (s.size() + 1, 0)); 
        for (int i = 0; i < s.size(); i++){
            for (int j = 0; j < s.size() ; j++){
                if (s[i] == s[s.size() - 1 - j]){
                    dp[i + 1][j + 1] = dp[i][j] + 1; 
                }
                else {
                    dp[i + 1][j + 1] = max (dp[i][j + 1], dp[i + 1][j]); 
                }
            }
        }
        return dp[s.size()][s.size()]; 
    }
};