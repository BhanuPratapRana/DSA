#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjlist;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected edge
        // direction = 1 -> directed edge

        if (direction == 0)
        {
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
        else
        {
            // directed edge
            adjlist[u].push_back(v);
        }
    }

    void printadjlist(int n)
    {

        for (int i = 0; i < n; i++)
        {
            cout << i << ": ";
            cout << "{ ";
            list<int> temp = adjlist[i];
            for (auto j : temp)
            {
                cout << j << ", ";
            }
            cout << "}" << endl;
        }
    }

    //     for( auto i : adjlist){
    //         cout<<i.first<<": ";
    //         cout<<"{ ";
    //         for(auto j: i.second){
    //             cout<<j<<", ";
    //         }
    //         cout<<"}"<<endl;
    //     }

    bool cyclecheckUndirectedBFS(int src, unordered_map<int, bool> &visited)
    {
        queue<int> q;
        unordered_map<int, int> parent;

        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        // main logic
        while (!q.empty())
        {
            int parentnode = q.front();
            q.pop();

            for (auto nbr : adjlist[parentnode])
            {

                if (!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = parentnode;
                }

                // cycle detection check
                // 1--- nbr already present(visited)
                // 2--- parent bhi nhi hain
                else if (visited[nbr] == true && nbr != parent[parentnode])
                {
                    return true;
                }
            }
        }
        return false;
    }

    bool cyclecheckUndirectedDFShelper(int src, unordered_map<int, bool> &dfsvisted, int parent)
    {
        dfsvisted[src] = true;

        for (auto nbr : adjlist[src])
        {
            if (!dfsvisted[nbr])
            {
                bool ans = cyclecheckUndirectedDFShelper(nbr, dfsvisted, src);
                if (ans == true)
                {
                    return true;
                }
            }
            // cycle check
            else if (dfsvisted[nbr] == true && nbr != parent)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(3, 3, 0);

    g.printadjlist(4);
    int n = 4;

    // ache bacche ==  disconnected compo handled
    bool ans = false;
    unordered_map<int, bool> visited;

    // for (int i = 0; i < n; i++)
    // {
    //     if(!visited[i]){
    //         //  ans = g.cyclecheckUndirectedBFS(i, visited);
    //        ;
    //          if(ans ==true){
    //             break;
    //          }

    //     }
    // }

    // dfs

    unordered_map<int, bool> dfsvisited;
    int parent = -1;
    for (int i = 0; i < n; i++)
    {
        if (!dfsvisited[i])
        {

            ans = g.cyclecheckUndirectedDFShelper(i, dfsvisited, parent);
            if (ans == true)
            {
                break;
            }
        }
    }
    
        if (ans == true)
        {
            cout << "cycle found";
        }
        else
        {
            cout << "cycle not found";
        }
 
        return 0;
}
