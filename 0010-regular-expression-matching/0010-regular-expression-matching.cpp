class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length();
        int n = p.length();
        
        // Create a 2D table to store the matching results
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        // Base case: an empty string and an empty pattern match
        dp[0][0] = true;
        
        // Fill the first row of the table
        // If the pattern contains '*' and the previous character in the pattern matches the current character in the string,
        // then the current position in the table matches.
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == '*'&&j>1) {
                dp[0][j] = dp[0][j - 2];
            }
        }
        
        // Fill the remaining positions of the table
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                // If the current characters match or the pattern contains '.',
                // then the current position in the table matches the previous position.
                if (s[i - 1] == p[j - 1] || p[j - 1] == '.') {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                // If the pattern contains '*', we have two cases:
                // 1. The '*' matches zero preceding element, then check if the pattern without '*' matches the current string.
                // 2. The '*' matches one or more preceding elements, then check if the current character in the string matches the preceding character in the pattern,
                //    and the current position in the table matches the previous position or the current position matches the position before the preceding character in the pattern.
                else if (p[j - 1] == '*') {
                        dp[i][j] = dp[i][j-2];
                        if(p[j-2]=='.'||p[j-2]==s[i-1]){
                            dp[i][j]=dp[i-1][j]||dp[i][j];
                        }
                    }else{
                        dp[i][j]==false;
                    }
                    
                
            }
        }
        
        return dp[m][n];
    }
};