class Solution {
public:
    
    vector< vector<int> >ans;
    
    void backtrack(int i, vector<int>&nums, vector<int>tmp ){
        
        if(i == nums.size()){
            ans.push_back(tmp);
            return;
        }
        
        tmp.push_back(nums[i]);
        
        backtrack(i+1,nums,tmp);
        
        tmp.pop_back();
        
        while(i<nums.size()-1&&nums[i]==nums[i+1]){
            i+=1;
        }
        
        backtrack(i+1,nums,tmp);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        ans.clear();
        vector<int>tmp;
        sort(nums.begin(),nums.end());
        backtrack(0,nums,tmp);
        
        return ans;
    }
    
};