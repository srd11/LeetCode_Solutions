class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        vector<vector<int>> memo(n, vector<int>(n, -1));
        auto dp = [&](auto&& dp, int i, int j)
        {
            if (i >= j) return 0;
            int &v = memo[i][j];

            if (~v) return v;
            if (s[i] == s[j]) v = dp(dp, i + 1, j - 1);
            else v = 1 + min(dp(dp, i + 1, j), dp(dp, i, j - 1));
            return v;
        };
        return dp(dp, 0, n - 1);
    }
};