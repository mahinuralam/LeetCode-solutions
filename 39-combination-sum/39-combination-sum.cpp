class Solution {
    
    vector< vector<int> >ans;
    
        
    void backtrack(vector<int>& candidates, int target, int start, vector<int>tmp){
        
        if(target<0){
            return;
        }
        
        if(target==0){
            ans.push_back(tmp);
            return;
        }
        
        for(int i=start;i<candidates.size();i++){
            tmp.push_back(candidates[i]);
            int val = target - candidates[i];
            backtrack(candidates, val, i, tmp);
            tmp.pop_back();
        }
        
    }
    
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>tmp;
        backtrack(candidates, target, 0, tmp);  
        return ans;
    }
};