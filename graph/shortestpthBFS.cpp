#include<bits/stdc++.h>
using namespace std;

class graph{
    public :
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v,  bool direction){
        //direction -- 0  > undirected
        //direction -- 1  > directed
        if(direction==0){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        else{
            adjList[u].push_back(v);
        }

    }

    void printAdjList(int n){
        for(int i=0;i<n;i++){
            cout<<i<<"{";
            for(auto j : adjList[i]){
                cout<<j<<"->";
            }
            cout<<"}"<<endl;
        }
    }

    void shortestpathBFS(int src, int dest){
        unordered_map<int, bool> visited;
        unordered_map<int,int> parent;
        queue<int> q;

        //inital state
        q.push(src);
        visited[src]=true;
        parent[src]=-1;

        //main logic
        while(!q.empty()){
            int frontnode =q.front();
            q.pop();

            for(auto nbr : adjList[frontnode]){
                if(!visited[nbr]){
                q.push(nbr);
                visited[nbr]=true;
                parent[nbr]=frontnode;
                }
            }
                      
        }
         //parent array ready

            vector<int> path;

            int node =dest;
            while(node!=-1){
                path.push_back(node);
                node = parent[node];
            }

            //reverse ordermein h
            reverse(path.begin(),path.end());

            //print path
            cout<<"printing path :";
            for(auto i :path){
                cout<<i<<"-> ";
            }
            cout<<endl;


    }

};
 
int main(){

    graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(2,4,0);
    g.addEdge(4,5,0);
    g.addEdge(5,3,0);

    int src=0;
    int dest=3;

    g.shortestpathBFS(src, dest);
     
     
    return 0; 
}