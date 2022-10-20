// 22. Generate Parentheses
// Similar to generating subsets 
// draw the recursion tree and apply dfs 


class Solution {
public:
    void backtrack(vector<string>&ans,int left,int right,string paren,int n){
        if (left==n &&right==n){
            ans.push_back(paren);
            return ;
        }
        
        if (left<n) backtrack(ans,left+1,right,paren+"(",n) ;
        // cout<<" left : "<< left <<" right: "<<right <<endl;
        // cout<<paren<<endl;
        if (left > right) backtrack(ans,left,right+1,paren+")",n);
        // cout<<" left :: "<< left <<" right: "<<right <<endl;
        // cout<<paren<<endl;
       
    }
    vector<string> generateParenthesis(int n) {
      // (( ))
        vector<string> ans;
        // string paren ="";
        backtrack(ans,0,0,"",n);
        return ans;
    }
};