class Solution {
public:
    int maxArea(vector<int>& v) {
        int ans=-1, area=0, i = 0, j = v.size()-1, cnt = v.size()-1;
        
        while(i<j){
            int l = v[i];
            int r = v[j];
            //cout<<l<<" l r "<<r<<endl;
            area = min(l,r)*cnt;
            cnt--;
            ans = max(ans,area);
            //cout<<area<<endl;
            if(l<r){
                i++;
            }
            else {
                j--;
            }
        }
        
        
        
        return ans;
        
    }
    
};