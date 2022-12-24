class Solution {
    void dfs_1(int parent ,int p,vector<vector<int>>&adj , vector<int>&count ,vector<int>&res,int n){
        for(auto child:adj[parent]){
            if(child!=p){
                dfs_1(child,parent,adj,count,res,n);
                count[parent]+=count[child];
                res[parent] += res[child]+count[child];
            }
        }
    }
    void dfs_2(int node, int parent ,vector<vector<int>>&adj , vector<int>&count,vector<int>&res,int n){
        for(auto child :adj[node]){
            if(parent!=child){
                res[child]= res[node]-count[child]+(n-count[child]);
                dfs_2(child,node,adj,count,res,n);
            }
        }
    }
 
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++){
          adj[edges[i][0]].push_back(edges[i][1]);
          adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>count(n,1) ,res(n,0);

        dfs_1(0,-1,adj,count,res,n);
        dfs_2(0,-1,adj,count,res,n);
        return res; 
    }
};
