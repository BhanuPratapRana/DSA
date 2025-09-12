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
    }

    void dijkstraalgo(int src, int n){
        vector<int> dist(n+1, INT_MAX);
        set<pair<int, int>> st;

        // {a,b}-- dist , node

        //initailize state
         dist[src]= 0;
        st.insert({0,src});

        //main logic
        while(!st.empty()){
            auto topelement = *(st.begin());
            int topnodedist = topelement.first;
            int topnode = topelement.second;

            //pop this node 
            st.erase(st.begin());

            for(auto nbr : adjlist[topnode]){
                //nbr --pair->{a,b}
                // a- node
                //b--wt
                int nbrdist=nbr.second;
                int nbrnode = nbr.first;

                if(dist[topnode] + nbrdist <dist[nbrnode]){
                    //2 kaam krne hain
                    // dist array ko update krna
                    //stet ko update krna hain

                    auto result = st.find({dist[nbrnode],nbrnode});
                    if(result != st.end()){
                        //mtlb entry found
                        //remove this entry
                        st.erase(result);
                    }
                    
                     dist[nbrnode]=dist[topnode] + nbrdist;
                    st.insert({dist[nbrnode],nbrnode});
                                    
                }
               
            }
        }

        cout<<"printing result :"<<endl;
        for(int i=0; i<n;i++){
            cout<<dist[i]<<" ";
        }
        cout<<endl;




    }
      
        //a --> pair of <int, list<pair<int,int>>>
        //a.first --> u
        //a.second --> pair 0f list<int,int>
        //b--> pair  of <Int,int>
        // b.first--> v
        //b.second --> wt
    void bellmanfordALgo(int src, int n){
        vector<int> dist(n,INT_MAX);
        //initial state
        dist[src]=0;


        //n-1 times loop chaloa
        for(int i=0; i<n-1;i++){
            //hr step pe jaao and relaxation step kro
            for(auto a : adjlist){
                for(auto b: a.second){
                    int u= a.first;
                    int v =b.first;
                    int wt= b.second;

                    if(dist[u] != INT_MAX && dist[u]+wt <dist[v]){
                        dist[v]=dist[u]+wt;
                    }

                }
            }
        }

        //ans
      

        //negative cycle check
    bool negativecycle = false;

      for(auto a : adjlist){
                for(auto b: a.second){
                    int u= a.first;
                    int v =b.first;
                    int wt= b.second;

                    if(dist[u] != INT_MAX && dist[u]+wt <dist[v]){
                        dist[v]=dist[u]+wt;
                        negativecycle=true;
                        break;
                    }

                }
            }
            if(negativecycle==true){
                cout<<"negative cycle present"<<endl;
            }
            else{
                  cout<<"negative cycle NOT present"<<endl;
                    cout<<"printing belman : ";
                     for(auto d : dist){
                        cout<<d<<" ";
                       }

            }
        }

        void floydwarshall_algo(int n){
           
            
            // make graph matric
            vector<vector<int>> dist(n, vector<int>(n, 1e9));

            //3 steps
            // fill i,i --0
            //copy data to matrix

            //step 1 : diagonal pr 0 rkhdo
            for(int i=0; i<n;i++){
                dist[i][i]=0;
            }

            //step 2 : copy all distance from graph to matrix
            
            // unordered_map<int,list<pair<int,int>> adjlist
            
            // a--> pair of int and list
            //a.first =u
            //a.second = list<pair<int,int>>
            // b --> pair of int and int
            //b.fisrt =v
            //b.second =wt
            for(auto a : adjlist){
                for(auto b : a.second){
                    int u = a.first;
                    int v=b.first;
                    int wt=b.second;
                    dist[u][v]=wt;

                }
            }

            //main logic for helper node
            for(int helper = 0; helper<n;helper++){
                for(int u=0; u<n;u++){
                    for(int v=0; v<n;v++){
                        dist[u][v]= min(dist[u][v], dist[u][helper]+dist[helper][v]);
                    }
                }
            }

            cout<<"printing floyd warshall : "<<endl;
            for(int i=0; i<n;i++){
                for(int j=0; j<n;j++){
                    cout<<dist[i][j]<<" ";
                }
                cout<<endl;
            }            
            


        }
};

    int main(){

        Graph g;
          // dijkstra and bellman ford
        //    g.addEdge(0,5,9,1);
        //    g.addEdge(0,3,6,1);
        //    g.addEdge(5,4,2,1);
        //    g.addEdge(4,3,11,1);
        //    g.addEdge(5,1,14,1);
        //    g.addEdge(4,1,9,1);
        //    g.addEdge(4,2,10,1);
        //    g.addEdge(3,2,15,1);
        //    g.addEdge(2,1,17,1);

           

        // g.dijkstraalgo(0, 6);
        // g.bellmanfordALgo(0,6);


        //floyd warshal 

        g.addEdge(1,0,4,1);
        g.addEdge(1,2,3,1);
        g.addEdge(3,1,-1,1);
        g.addEdge(2,3,2,1);
        g.addEdge(0,2,-2,1);

        g.floydwarshall_algo(4);






        return 0;
    }