class Solution {
    
    
    void backtrack(string s, int n, vector< string >&ans, long long int close, long long int open){
        
        
        if(close==open&&close==n){
            ans.push_back(s);
            return;
        }
        
        if(open<n){
            s+='(';
            open++;
            backtrack(s, n, ans, close, open);
            open--;
            s.pop_back();
        }
        
        if(close<open){
            s+=')';
            close++;
            backtrack(s, n, ans, close, open);
            close--;
            s.pop_back(); 
        }
        
    }
    
    
public:
    vector<string> generateParenthesis(int n) {
        
        vector< string >ans;
        vector<string>tmp;
        string s="";
        long long int close=0,open=0;
        backtrack(s, n, ans, close, open);
        
        return ans;
    }
};