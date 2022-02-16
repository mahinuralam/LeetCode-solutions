class Solution {
    
    map< vector<int>,int >mp;
    vector< vector<int> >ans;
    
    void backtrack(vector<int>tmp, vector<int>&cand, int target, int start){
        
        if(target<0){
            return;
        }
        
        if(target==0){
            if(mp[tmp]==0){
                ans.push_back(tmp);
                mp[tmp]++;
            }
            return;
        }
        
        for(int i=start;i<cand.size();i++){
            
            
            if(i>start&&cand[i]==cand[i-1]){
                continue;
            }
            
            int val = target - cand[i];
            
            
            tmp.push_back(cand[i]);
            
            backtrack(tmp, cand, val, i+1);
            
            tmp.pop_back();
            
        }
        
    }
    
    
public:
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        
        sort(cand.begin(),cand.end());
        vector<int>tmp;
        backtrack(tmp, cand, target, 0);
        return ans;
        
    }
};