#include<bits/stdc++.h>
using namespace std;

class graph{
    public :
    unordered_map<int, list<pair<int,int>>> adjList;

    void addEdge(int u, int v,int wt,  bool direction){
        //direction -- 0  > undirected
        //direction -- 1  > directed
        if(direction==0){
            adjList[u].push_back({v,wt});
            adjList[v].push_back({u,wt});
        }
        else{
            adjList[u].push_back({v,wt});
        }

    }



   void topoDFS(int src, unordered_map<int,bool>&visited, stack<int> &ans ){
      visited[src]=true;
      
      for(auto nbr : adjList[src]){
          if(!visited[nbr.first]){
              topoDFS(nbr.first,visited,ans);
          }
      }
      
      //backtrack
      ans.push(src);
  }

  void shortespathDFS(int src){
    stack<int> topoorder;
    unordered_map<int,bool>visited;
    unordered_map<int,int>parent;

    topoDFS(src,visited,topoorder);

    //ab mere pass topoOrder ka stack ready hain

    int n = topoorder.size();
    vector<int> dist(n, INT_MAX);

    //init state
    src= topoorder.top();
    topoorder.pop();
     dist[src]=0;
     parent[src]=-1;
     //and src ke nbrs k min distace ko update krte ho

     for(auto nbr: adjList[src]){
        //nbr -> {a,b}
        //a=> node
        //b-> weight

        int node = nbr.first;
        int wtdist = nbr.second;

        if(dist[src]+wtdist<dist[node]){
            dist[node]=dist[src]+wtdist;
            parent[node]=src;
        }
     }

     //main logic
     while(!topoorder.empty()){
        int frontnode =topoorder.top();
        topoorder.pop();

          for(auto nbr: adjList[frontnode]){
        //nbr -> {a,b}
        //a=> node
        //b-> weight

        int node = nbr.first;
        int wtdist = nbr.second;

        if(dist[frontnode]+wtdist<dist[node]){
            dist[node]=dist[frontnode]+wtdist;
            parent[node]=frontnode;
        }
    }

     }

     cout<<"printing distance array :"<<endl;
     for(auto i : dist){
        cout<<i<<" "; 
     }
     cout<<endl;

     int dest=2;
     while(dest!=-1){
        cout<<dest<<"<-";
        dest =parent[dest];
     }


  }
};
 
int main(){

    graph g;

    g.addEdge(0,1,5,1);
    g.addEdge(0,2,13,1);
    g.addEdge(0,4,3,1);
    g.addEdge(1,2,7,1);
    g.addEdge(1,4,1,1);
    g.addEdge(4,3,6,1);
    g.addEdge(3,2,2,1);

    g.shortespathDFS(0);



     
    return 0; 
}