#include<bits/stdc++.h>
using namespace std;
class graph{
    public :
    unordered_map<int, list<int>> adjlist;
    
    void addEdge(int u, int v,  bool direction){
        //direction -- 0  > undirected
        //direction -- 1  > directed
        if(direction==0){
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        else{
            adjlist[u].push_back(v);
        }

    }

    void printAdjList(int n){
        for(int i=0;i<n;i++){
            cout<<i<<" : {";
            for(auto nbr : adjlist[i]){
                cout<<nbr<<"->";
            }
            cout<<"}"<<endl;
        }
    }

    void topoDFS(stack<int> &st,int node, unordered_map<int,bool>&visited){
           visited[node]=true;

           for(auto nbr : adjlist[node]){
               if(!visited[nbr]){
                   topoDFS(st, nbr, visited);
               }
           }
              //backtrack
              st.push(node);
    }

    void dfs(int src, unordered_map<int,bool>&visited, unordered_map<int, list<int>>&newadjlist){
        visited[src]=true;
        cout<<src<<"-";

        for(auto nbr : newadjlist[src]){
            if(!visited[nbr]){
                
                dfs(nbr,visited,newadjlist);
            }


        }
    }

    int countssc(int n){
        // step 1 : find topoordering 
         stack<int> st;
    unordered_map<int,bool> vis;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            topoDFS(st, i, vis);
        }
    }
      //topological sort order is ready in stack

      //step 2 : reverse all edges
       //u-- i.first
      //v--j

      unordered_map<int,list<int> > newadjlist;
      for(auto i : adjlist){
        for(auto j : i.second){
            int u= i.first;
            int v=j;

            //u->v ek edge di, and mujhe reverse krna hain

            newadjlist[v].push_back(u);
        }
      }

      // step 3 dfs traversal
      int count =0;
      unordered_map<int,bool> visited; 

      while(!st.empty()){
        int src= st.top();
        st.pop();

        if(!visited[src]){
            cout<<"SSC : ";
            dfs(src,visited,newadjlist);
            
            // ek poora component traverse ho chuka h
            cout<<endl;
            count ++;
        }
      }
      return count;

    }
};
 
int main(){

    graph g;
    g.addEdge(0,3,1);
    g.addEdge(3,2,1);
    g.addEdge(2,1,1);
    g.addEdge(1,0,1);
    g.addEdge(2,4,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,4,1);
    g.addEdge(6,7,1);

    int n=8;
    g.printAdjList(n);

   

  

    int SCCcount = g.countssc(n);
    cout<<"SCC COUNT : "<<SCCcount<<endl;


    // cout<<"Topological Sort Order: "<<endl;
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;

     
     
    return 0; 
}