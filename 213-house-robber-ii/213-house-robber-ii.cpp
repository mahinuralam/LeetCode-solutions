class Solution {
public:
    
    int dp(vector<int>& nums, int start, int end){
        
        int val1 = nums[start];
        int val2 = max(nums[start], nums[start+1]);
        int mx = val2;
        
        for(int i=start+2;i<=end;i++){
            
            mx = max(val1 + nums[i], val2);
            
            val1 = val2;
            val2 = mx;
            
        }
        
        return mx;
    }
    
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0], nums[1]);
        }
        
        return max(dp(nums, 0, n-2), dp(nums, 1, n-1));
    }
    
};