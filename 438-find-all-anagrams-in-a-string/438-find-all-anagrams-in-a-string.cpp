class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        vector<int>v;
        int sz = p.size();
        
        for(int i=0;i<sz;i++){
            v1[p[i]-'a']++;
        }
        
        for(int i=0;i<s.size();i++){
            
            if(i<=sz-1){
                v2[s[i]-'a']++;
                
            }
            else {
                v2[s[i]-'a']++;
                v2[s[i-sz]-'a']--;
    
            }
            
            if(i>=sz-1){
                if(v1==v2){
                    v.push_back(i-(sz-1));
                    
                }
            }
            
        }
        
        return v;
    }
};