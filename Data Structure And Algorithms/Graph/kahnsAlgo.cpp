#include <bits/stdc++.h>
using namespace std;


class Graph
{

    int V;
    list<int> *adj;

    
public:
    Graph(int V);

    void addEdge(int v, int w);

    // void topologicalsort();
    
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{

    // create adj list
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < v; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // find all indegress
    vector<int> indegree(v);
    for (auto i : adj)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }

    // pushing the elements of 0 indegrees

    queue<int> q;

    for (int i = 0; i < v; i++)
    {
        /* code */
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    // do bfs

    vector<int> ans;

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        // ans store

        ans.push_back(front);
        // neighbour indegree update
        for (auto neighbour : adj[front])
        {
            indegree[neighbour]--;
            if (indegree[neighbour] == 0)
            {
                q.push(neighbour);
            }
        }
    }

    return ans;
}
};

Graph::Graph(int V)
{

    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{

    adj[v].push_back(w);
}

// topological sort using bfs


int main()

{
    Graph g(6);

    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);

    cout << "topological sort: " << endl;

    g.topologicalsort();
}