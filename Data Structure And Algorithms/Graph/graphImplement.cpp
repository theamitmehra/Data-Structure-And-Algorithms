#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // creating graph using adj matrix

    int v, e;
    cin>>v>>e;

    int adjMatrix[v+1][v+1];

    for(int i =0; i< e; i++){
        int uu, uv;
        cin>> uu >> uv;

        adjMatrix[uu][uv] = true;
        adjMatrix[uv][uu] = true;
    }

    return 0;

}

// #include<bits/stdc++.h>
// using namespace std;

// // func for adding edges to nodes 
// void addEdge(vector<int> adj[], int u, int v){

//     adj[u].push_back(v);
//     adj[v].push_back(u);

// }



// // driver mode
// int main(){

//     int V = 5;

//     vector<int> adj[V];
//     addEdge(adj, 0, 1);
//     addEdge(adj, 0, 4 );
//     addEdge(adj, 1, 2);
//     addEdge(adj, 1, 3);
//     addEdge(adj, 1, 4);
//     addEdge(adj, 2, 3);
//     addEdge(adj, 3, 4);
//     printGraph(adj, V);

//     return 0;

    
// }