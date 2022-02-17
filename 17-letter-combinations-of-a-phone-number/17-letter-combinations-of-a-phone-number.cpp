class Solution {
    
    
    void backtrack(string dig, int id, map<char,string>&mp, vector<string>&ans, string tmp){
        
        if(id==dig.size()){
            ans.push_back(tmp);
            return;
        }
        
        
        string s = mp[dig[id]];
        for(int i=0;i<s.size();i++){
            
            tmp += s[i];
            
            backtrack(dig, id+1, mp, ans, tmp);
            
            tmp.pop_back();
        }
    }
    
    
public:
    
    
    
    
    vector<string> letterCombinations(string dig) {
        
        
        if(dig.size()==0){
            return {};
        }
        
        map<char,string>mp;
        
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        
        vector<string>ans;
        string tmp;
        
        backtrack(dig, 0, mp, ans, tmp);
        
        return ans;
        
    }
};