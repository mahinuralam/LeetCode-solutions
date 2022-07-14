class Solution {
public:
    
    int f(int i, int j, vector<vector<int>>&tri, int n, vector<vector<int>>&dp)
    {
        if(i == n-1)
        {
            return tri[n-1][j];
        }
        
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        int d = tri[i][j] + f(i+1, j, tri, n, dp);
        int dg = tri[i][j] + f(i+1, j+1, tri, n, dp);
        
        return dp[i][j] = min(d, dg);
    }
    
    
    
    int minimumTotal(vector<vector<int>>& tri) {
        int n = tri.size();
        vector< vector<int> > dp(n, vector<int> (n, -1));
        return f(0, 0, tri, n, dp);
    }
};