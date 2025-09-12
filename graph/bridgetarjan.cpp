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

    void countBridge(int src,int parent, vector<int> &tin, vector<int> &low, unordered_map<int,bool>&visited,int &timer){
        //initiakl state   
        timer++;
        visited[src] = true;
        tin[src]=timer;
        low[src]=timer;

        //neighbours pe travel krte hain
        for(auto nbr: adjlist[src]){
            //unidrected graph hain to , nbr me parent bhi ho skta hain
            if(nbr==parent){ continue;
            }

            else if(!visited[nbr]){
                // noraml traverse kro and check for bridges
                
                countBridge(nbr, src, tin, low, visited, timer);
                //backtrack
                //bridge check

                //ye main bhool jaat hun
                low[src] = min(low[src], low[nbr]);

                if(low[nbr] > tin[src]){
                    cout<<"bridge found : ";
                    cout<<nbr<<" - "<<src<<endl; 
                }

            }
            else{
                // already visited and not parent
                //low time ko update kro if possible
                // low[src] = min(low[src], low[nbr]);

                //here it should be tin[nbr] not low[nbr] 
                // ✅ Using low[nbr] here would be wrong, because low[nbr] may represent times from nbr’s descendants too, but in a back edge we want the ancestor’s discovery time (tin)
                low[src] = min(low[src], tin[nbr]);
                // i will come back to this later

            }

        }



    }

};

    
 
int main(){
    graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(0,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,4,0);

    int n=5;
    g.printAdjList(n);
     
      int timer = 0;
    int src = 0;
    int parent =-1;
    vector<int> tin(n);
    vector<int> low(n);
    unordered_map<int,bool> visited;
  

    g.countBridge(src, parent, tin, low, visited, timer);

      // 🔹 FIX 3: Run for all components (not just src=0)
    // for (int i = 0; i < n; i++) {
    //     if (!visited[i]) {
    //         g.countBridge(i, -1, tin, low, visited, timer);
    //     }
    // } 

     
     
    return 0; 
}