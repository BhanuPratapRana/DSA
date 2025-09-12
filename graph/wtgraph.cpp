#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<pair<int,int>>> adjlist;
    // first int -- u
    // second int --v
    // third int  -- weight

    void addEdge(int u, int v, int weight,bool direction){
        //direction = 0 -> undirected edge
        //direction = 1 -> directed edge

       if(direction ==0){
        adjlist[u].push_back({v,weight});
        adjlist[v].push_back({u,weight});

       } 
       else{
        // directed edge
        adjlist[u].push_back({v,weight});
       }       

    }

    void printadjlist(int n){

        for(int i=0; i<n;i++){
            cout<<i<<": ";
            cout<<"{ ";
            list<pair<int,int>> temp = adjlist[i];
            for(auto j : temp){
                //j is  a pair
                cout<<"("<<j.first<<","<<j.second<<"), ";
            }
            cout<<"}"<<endl;
        }


    //     for( auto i : adjlist){
    //         cout<<i.first<<": ";
    //         cout<<"{ ";
    //         for(auto j: i.second){
    //             cout<<j<<", ";
    //         }
    //         cout<<"}"<<endl;
    //     }

    }

    void bfstraversal(int src){
        queue<int> q;
        unordered_map<int, bool> visited;

        //initial state
        q.push(src);
        visited[src]=true;
       
        //main logic
        while(!q.empty()){
            int frontnode = q.front();
            cout<<frontnode<<", ";
            q.pop();

            for(auto neighbour : adjlist[frontnode]){
                //neighbour--> pair
                // first --> node
                //second --> weight

                int node = neighbour.first;
                int weight = neighbour.second;

                if(!visited[node]){
                    q.push(node);
                    visited[node]=true;

                }

            }
        }
    }

    void dfsHelper(int src, unordered_map<int,bool>&visited){
        visited[src]=true;
        cout<<src<< ", ";

        //iske child pe jao aur 1 by 1 sb pr recursivie call lga do
        for(auto nbr: adjlist[src]){
            //nbr--pair
            //dirst--node
            //second--weight
            int node = nbr.first;

            if(!visited[node]){
                dfsHelper(node,visited);
            }
        }

    }

    void dfstraversal(int n){
        int src=0;
        unordered_map<int, bool> visited;

        //for disconnected components--it will print discon. component by using this loop
        for(int src=0; src<n;src++){
            if(!visited[src])
        dfsHelper(src,visited);
        }
    }



    
};
 
int main(){
    Graph g;
    // g.addEdge(0,1,3,1);
    // g.addEdge(0,2,4,1);
    // g.addEdge(1,2,1,1);
    // g.addEdge(2,3,16,1);

    g.addEdge(0,3,3,1);
    g.addEdge(0,5,3,1);
    g.addEdge(0,2,3,1);
    g.addEdge(2,5,3,1);
    g.addEdge(3,5,3,1);
    g.addEdge(5,4,3,1);
    g.addEdge(5,6,3,1);
    g.addEdge(4,1,3,1);
    g.addEdge(6,1,3,1);
    int n=7;

    g.printadjlist(n);
    cout<<endl<<"BFS : ";
    g.bfstraversal(0);

    cout<<endl<<"DFS :";
    g.dfstraversal(n);
     
     
    return 0; 
}