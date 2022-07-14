class Solution {
public:
    
    
    int f(int i, int j, vector<vector<int>>& mat, vector<vector<int>>& dp)
    {
        if(j<0 || j>= mat.size()) return 1e8;
        if(i==0) return mat[0][j];
        
        if(dp[i][j] != -1)
        {
            return dp[i][j];
        }
        
        int u = mat[i][j] + f(i-1, j, mat, dp);
        int ld = mat[i][j] + f(i-1, j-1, mat, dp);
        int rd = mat[i][j] + f(i-1, j+1, mat, dp);
        
        return dp[i][j] = min(u, min(ld, rd));
    }
    
    
    
    
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat.size();
        vector< vector<int> > dp(n, vector<int>(n, -1));
        
        
        int ans = 1e8;
        for(int j = 0; j < m; j++)
        {
            ans = min(ans, f(n-1, j, mat, dp));
        }
        
        return ans;
    }
};