class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag = false;
        for(int i=0;i<matrix.size();i++){
            vector<int>v;
            v = matrix[i];
            int l = 0, r = v.size()-1;
            while(l<=r){
                int mid = (r+l)/2;
                cout<<v[mid]<<endl;
                if(v[mid]==target){
                    flag = true;
                }
                if(v[mid]<target){
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }
        }
        
        return flag;
    }
    
};