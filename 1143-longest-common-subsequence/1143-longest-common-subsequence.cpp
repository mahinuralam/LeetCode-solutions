class Solution {
public:
    
    int f(int i, int j, string &s1, string &s2, vector< vector<int> > &dp)
{
    if (i < 0 || j < 0)
        return 0;
    
    if(dp[i][j] != -1) return dp[i][j];
        
    if (s1[i] == s2[j])
        return 1 + f(i - 1, j - 1, s1, s2, dp);

    int take = f(i - 1, j, s1, s2, dp);
    int notTake = f(i, j - 1, s1, s2, dp);

    return dp[i][j] = max(take, notTake);
}
    
    
    int longestCommonSubsequence(string s1, string s2) {
        vector< vector<int> > dp (s1.size(), vector<int>(s2.size(), -1));
        return f(s1.size() - 1, s2.size() - 1, s1, s2, dp);
        
    }
};