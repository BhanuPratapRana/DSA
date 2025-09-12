#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adjlist;

    void addEdge(int u, int v, bool direction){
        //direction = 0 -> undirected edge
        //direction = 1 -> directed edge

       if(direction ==0){
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);

       } 
       else{
        // directed edge
        adjlist[u].push_back(v);
       }       

    }

    void printadjlist(int n){

        for(int i=0; i<n;i++){
            cout<<i<<": ";
            cout<<"{ ";
            list<int> temp = adjlist[i];
            for(auto j : temp){
                cout<<j<<", ";
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
};
 
int main(){
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(0,2,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);

    g.printadjlist(4);

     
     
    return 0; 
}