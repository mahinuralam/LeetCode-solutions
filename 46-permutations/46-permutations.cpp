class Solution {
    
    void per(vector< int > &tmp, vector< vector< int > > &ans, map<int, int> &mp, vector<int>& nums)
    {
        if(tmp.size()==nums.size())
        {
            ans.push_back(tmp);
            return;
        }
        
        for(int i=0; i < nums.size(); i++)
        {
            if(mp[i]==0)
            {
                tmp.push_back(nums[i]);
                mp[i] = 1;
                
                per(tmp, ans, mp, nums);
                
                mp[i]=0;
                tmp.pop_back();
            }
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector< vector< int > > ans;
        vector< int > tmp;
        map<int, int> mp;
        
        per(tmp, ans, mp, nums);
        
        return ans;
    }
};