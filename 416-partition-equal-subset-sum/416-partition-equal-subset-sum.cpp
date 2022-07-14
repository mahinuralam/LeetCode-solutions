class Solution {
public:
    
    bool f(int ind, int tar, vector< int > &ar, vector< vector<int> > &dp)
    {
        if(tar == 0) return true;
        if(ind == 0) return (ar[0] == tar);
        
        
        if(dp[ind][tar] != -1) return dp[ind][tar];
        
        bool notTake = f(ind - 1, tar, ar, dp);
        bool take = false;
        if(ar[ind] <= tar) take = f(ind - 1, tar-ar[ind], ar, dp);
        return dp[ind][tar] = take | notTake;
    }
    
    
    bool canPartition(vector<int>& nums) {
        
        
        
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        
        if(sum % 2 != 0) return false;
        
        vector< vector<int> >dp(nums.size(), vector< int > (sum, -1));
        
        sum = sum /2;
        
        return f(nums.size()-1, sum, nums, dp);
        
    }
};