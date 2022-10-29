class Solution {

    void backtrack(vector<vector<int>>&v,vector<int>subset,int n ,int k,int i){
        if (subset.size()==k) 
        { v.push_back(subset);
          return ;
        }
        
        if(i<=n-k)backtrack(v,subset,n,k,i+1);
        subset.push_back(i);
        backtrack(v,subset,n,k-1,i+1);
    }    
    
    
    public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>v;
        vector<int>subset;
        backtrack(v,subset,n,k,1);
        return v;
    }
};