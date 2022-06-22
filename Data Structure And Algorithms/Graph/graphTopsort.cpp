#include<bits/stdc++.h>
using namespace std;

// func for topological sort by dfs

void topoSort(int node, vector<bool >  &visited, stack<int> &s, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;
    for(auto neighbour : adj[node])
    {
        if(!visited[neighbour])
        topoSort(neighbour, visited, s, adj);

    }

    s.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges , int v, int e )
{
    //create adj list

    unordered_map<int, list<int> > adj;

    for (int i = 0; i < e; i++)
    {
        /* code */
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);

    }

    //call dfs topoligical sort util func for all components
    vector<bool > visited;
    stack<int> s;
    for (int i = 0 ; i< v ; i++)
    {
        if(!visited[i])
        {
            topoSort(i, visited, s, adj);
        }


    }

    vector<int> ans;

    while (!s.empty())

    {
        ans.push_back(s.top());
        s.pop();
        
    }
    
    return ans;
    
}


int main(){

}