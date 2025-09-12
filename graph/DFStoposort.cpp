#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
   void topoDFS(int src, vector<vector<int>> &adj,unordered_map<int,bool>&visited, vector<int> &ans ){
      visited[src]=true;
      
      for(auto nbr : adj[src]){
          if(!visited[nbr]){
              topoDFS(nbr,adj,visited,ans);
          }
      }
      
      //backtrack
      ans.push_back(src);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto &e : edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
        }
        
        unordered_map<int,bool> visited;
        int n=V;
        
        vector<int> ans;
    
        
        //disconnected comp
        for(int i=0; i<n;i++){
            if(!visited[i]){
               topoDFS(i,adj,visited,ans);
            }
        }
        
        //reverse ans
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
 
int main(){
     
     
    return 0; 
}