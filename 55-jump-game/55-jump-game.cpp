class Solution {
public:
    bool canJump(vector<int>& v) {
        
        bool f=1;
        int reachable = v[0], n = v.size();
        
        
        
        for(int i=1;i<v.size();i++){
            
            if(reachable >= i){
                reachable = max(reachable, v[i]+i);
            }
            else {
                //cout<<i<<" "<<v[i]<<" "<<reachable<<endl;
                return false;
            }
            
        }
        
       return true;
    }
};