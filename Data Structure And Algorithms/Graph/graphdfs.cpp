#include <bits/stdc++.h>
using namespace std;

class Graph
{

public:
    map<int, bool> visited;
    map<int, list<int>> adj;

    void addEdge(int V, int w);
    void DFS(int v);
};

void Graph::addEdge(int v, int w)
{

    adj[v].push_back(w);
}

void Graph::DFS(int v)
{

    visited[v] = true;

    cout << v << " ";

    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if (!visited[*i])
            DFS(*i);
    }
}

int main()
{

    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "depth first traversal(starting from vertex 2" << endl;

    // g.DFS(0);

    // g.DFS(1);

    // g.DFS(2);

    g.DFS(3);

    return 0;
}