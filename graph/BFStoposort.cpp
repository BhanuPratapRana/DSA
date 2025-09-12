#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  
  void toposortBFS(int n, vector<vector<int>>&adj,  vector<int> &ans){
      unordered_map<int,int> indegree;
      queue<int> q;
      
      //prepare indegree list
      for(int src=0;src<n; src++){
          for(auto nbr : adj[src]){
              //src-> nbr
              indegree[nbr]++;
          }
      }
      
      //check for indegree 0 and push in q
      //maintain initial state
      
      for(int i=0;i<n;i++){
          if(indegree[i]==0){
              q.push(i);
          }
      }
      
      //main logic
      while(!q.empty()){
          int frontnode =q.front();
          q.pop();
          ans.push_back(frontnode);
          
          //kyuki forntnode graph se hat chuki hain to indegree update krdo of its children accordingly
          for(auto nbr : adj[frontnode]){
              //remove frontnode->nbr
              indegree[nbr]--;
              if(indegree[nbr]==0){
                  q.push(nbr);
              }
          }
      }
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
              vector<vector<int>> adj(V);
              vector<int> ans;
              int n=V;
              
        for(auto &e : edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
        }
        
        toposortBFS(V,adj,ans);
        return ans;
        
        
    }
};
 
int main(){
     
     
    return 0; 
}