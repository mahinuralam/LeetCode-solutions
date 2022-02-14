class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        int n = v.size();
        vector<vector<int> > result;
        sort(v.begin(),v.end());
        
        for(int i=0;i<n-2;i++){
            if(i==0||v[i] != v[i-1]){
                int j=i+1, k = n-1;
                while(j<k){
                    int sum = v[i]+v[j]+v[k];
                    if(sum==0){
                        result.push_back({v[i],v[j],v[k]});
                        while(j<k && v[j] == v[j+1]){j++;}
                        while(j<k && v[k] == v[k-1]){k--;}
                        j++,k--;
                    }
                    else if(sum>0){k--;}
                    else j++;
                }
            }
        }
        return result;
        
        
    }
};