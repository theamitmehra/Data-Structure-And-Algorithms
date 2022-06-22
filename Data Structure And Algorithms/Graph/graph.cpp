// #include"stdafx.h"
/*
#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<set>
using namespace std;
template<typename T>
class graph {
public:
	map<T, list<pair<T,int> > > adjlist;

	void addEdge(T u, T v, int dist,bool bidirec = 1)
	{

		adjlist[u].push_back(make_pair(v, dist));

		if (bidirec)
			adjlist[v].push_back(make_pair(u, dist));
	}

	void print_adj()
	{
		for (auto n : adjlist)
		{
			cout << n.first<<" : ";
				for (auto a : n.second )
			{
				cout <<"( "<<a.first<<" , "<<a.second<<" ) " ;
			}
				cout << endl;
		}
	}

	void bfs(T u)
	{
		map< T, bool> visited;
		queue<T> q;
		q.push(u);
		while (!q.empty())
		{
			T front_element = q.front();
			q.pop();
			if (!visited[front_element]) {
				cout << front_element << " -> ";
				visited[front_element] = true;
			}
			for (auto a : (adjlist[front_element]))
			{
				if(!visited[a.first])
				q.push(a.first);

			}
		}
	}

	void dfs_helper(T src,map<T,bool> &visited)
	{
		visited[src] = true;
		cout << src << " -> ";

		for (auto a : adjlist[src])
		{
			if (!visited[a.first])
			{
				dfs_helper(a.first, visited);
			}
		}
	}

	void dfs_utility(T src) //calling function of dfs helper
	{
		map < T, bool> visited;
		dfs_helper(src, visited);
	}

	void bfs_sssp(T src)
	{

		map<T, int> distance;
		map<T, T> parent;
		for (auto i : adjlist)
		{
			distance[i.first] = INT_MAX;
		}
		queue<T> q;
		q.push(src);
		distance[src] = 0;
		parent[src]=src;
		while (!q.empty())
		{
			T front_element = q.front();
			q.pop();

			for (auto neighbours : (adjlist[front_element]))
			{
				if (distance[neighbours.first] == INT_MAX)
				{
					q.push(neighbours.first);
					distance[neighbours.first] = distance[front_element] + 1;
					parent[neighbours.first] = front_element;
				}
			}
		}

		for (auto i : adjlist)
		{
			cout << "distance to " << i.first << " from  " << src << " is " << distance[i.first] << endl;
		}

		//suppose u want to know the hortest path beeen 2 nodes.
		//let destion be == g
		T temp = 'g';
		while (parent[temp] != temp)
		{

			cout << temp << "<--";
			temp = parent[temp];
		}cout << src << endl;

	}


	void dijkstra(T src)
	{
		map<T, int> dist;
		for (auto i : adjlist)
		{
			dist[i.first] = INT_MAX;
		}
		set<pair<int, T> > s;
		s.insert(make_pair(0, src));
		dist[src] = 0;
		while (!s.empty())
		{
			auto p = *(s.begin());
			int nodedist = p.first;// sorce node ka distance
			T temp = p.second;
			s.erase(s.begin());

			for (auto neigh : adjlist[temp])
			{
				if (nodedist + neigh.second < dist[neigh.first])//neigh.second distance h adjlist me
				{

					//purane wale ko delete karo and naye wale ko dalo
					auto f = s.find(make_pair(dist[neigh.first], neigh.first));
					if (f != s.end())
					{
						s.erase(f);
					}

					dist[neigh.first] = nodedist + neigh.second;
					s.insert(make_pair(dist[neigh.first], neigh.first));
				}
			}
		}
		for (auto d : dist)
			cout << d.first << " and " << d.second << endl;

	}
};

int main()
{
	graph<char> g;
	g.addEdge('0', '1',4, 0);
	g.addEdge('0', '7',8, 0);
	g.addEdge('1', '7',11, 0);
	g.addEdge('1', '2',8, 0);
	g.addEdge('7', '8',7, 0);
	g.addEdge('2', '8',2, 0);
	g.addEdge('8', '6',6, 0);
	g.addEdge('2', '5',4, 0);
	g.addEdge('6', '5',2, 0);
	g.addEdge('2', '3',7, 0);
	g.addEdge('3', '3',14, 0);
	g.addEdge('3', '4',9, 0);
	g.addEdge('5', '4',10, 0);
	g.addEdge('7', '6',1, 0);
	g.print_adj();

	return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

vector<int>  bfsOfGraph(int v, vector<int> adj[]){   //striever code

	vector<int> bfs;
	vector<int> vis(v+1, 0);

	for(int i = 1; i<= v; i++) {
		if(!vis[i]){

			queue<int> q;
			q.push(i);
			vis[i] = 1;

			while(!q.empty())
			{
				int node = q.front();
				q.pop();

				bfs.push_back(node);

				for(auto it: adj[node]) {
					if(!vis[it]){
						q.push(it);
						vis[it] = 1;
					}
				}
			}
		}
	}

	return bfs;
}

void addEdge(vector<int> adj[], int u , int v){

	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V ){

	for(int v =0; v<V; ++v){
		cout<<endl<<"adjacency list of vertex "<<v<<endl<<"head ";
		for(auto x : adj[v])
		{
			cout<<"-> "<<x;
		}

		cout<<endl;

	}
}



//driver mode
int main()
{

	int V = 5;

	vector<int> adj[V];

	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);

	printGraph(adj, V);
	// adjency list

	// int n, m;

	// cin >> n >> m;

	// vector<int> adj[n + 1];

	// // take edges as input;

	// for (int i = 0; i < m; i++)
	// {

	// 	int u, v;

	// 	cin >> u >> v;

	// 	adj[u].push_back(v);
	// 	adj[v].push_back(u);
	// }

	// // adjecency matrix;

	// int n, m;

	// cin >> m >> n;

	// // decleare the adjecency matirx

	// int adj[n + 1][n + 1];

	// // take edges as input

	// for (int i = 0; i < m; i++)
	// {

	// 	int u, v;

	// 	adj[u][v] = 1;
	// 	adj[v][u] = 1;
	// }


	

	return 0;
}