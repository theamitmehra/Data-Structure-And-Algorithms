#include<bits/stdc++.h>
using namespace std;

// this is an algorithms for finding shortest path , having negative weights
// cant be applied in graph having negative cycle for getting shortest path, but it can be used to find negative cycle

//

// dijstra is like greedy algo 

int bellmanford(int n, int m, int dest, int src, vector<vector<int>> &edges){


    vector<int> dist (n+1, 1e9);
    dist[src] = 0;

    //n -1 times checking for shortest dist between vertices

    for (int i = 0; i < n; i++)     
    {
        for (int j = 0; j < n; j++)
        {
            

            int u = edges[j][0];
            int v = edges[j][1];
            int w = edges[j][2];

            if(dist [u] != 1e9 && (dist[u] + w < (dist[v]))){

            dist[v] = dist[u] + w;}

        }
        
    }
    
    return dist[dest];

}


int main(){

 
    


}