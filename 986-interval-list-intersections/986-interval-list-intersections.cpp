class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& f, vector<vector<int>>& s) {
        vector<vector<int> >v;
        int i=0,j=0;
        while(i<f.size()&&j<s.size()){
            
            
            int x1 = f[i][0], y1 = f[i][1];
            int x2 = s[j][0], y2 = s[j][1];
            
            cout<<x1<<" one "<<y1<<endl;
            cout<<x2<<" two "<<y2<<endl;
            
            int mx = max(x1,x2);
            int mn = min(y1,y2);
            
            if((mx<=mn)){
                v.push_back({mx,mn});
            }
            
            
            if(y1<=y2){
                cout<<y1<<" if "<<y2<<endl;
                i++;
            }
            else {
                cout<<"else"<<endl;
                j++;
            }
            
        }
        
        return v;
    }
};