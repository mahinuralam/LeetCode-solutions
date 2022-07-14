class Solution {
public:
int unique(vector<vector<int>> &grid , int i , int j , vector<vector<int>> &dp){

    if(i == 0 and j == 0 ) return 1;
    
    if(dp[i][j] != -1) return dp[i][j];
    
    int way1 , way2;
    way1 = way2 = 0;
    
    if(j != 0 and grid[i][j-1] == 0 ){
        way1 = unique(grid , i , j-1 , dp);
}

    if(i != 0 and grid[i-1][j] == 0){
        way2 = unique(grid , i-1 , j , dp);
    }
    
    
    return dp[i][j] = way1 + way2;
}
int uniquePathsWithObstacles(vector<vector<int>>& grid) {

    int m = grid.size();
    int n = grid[0].size();
    if(grid[m-1][n-1] == 1) return 0;
    vector<vector<int>> dp(m+1 , vector<int>(n+1 , -1));
    return unique(grid , m-1 , n-1 , dp);
}
};