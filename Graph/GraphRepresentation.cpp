/*
1. Graph {E,V}
2. DirectedGraph, UnDirected Graph / Cyclic and Acyclic graph / Weighted Graph , Directed Acycle Graph (DAG)
3. In degree, Out degree
4. If total Degree = 2*E means graph is undirected 
5. In indirected Graph by default we assume that graph edge weight is 1 unit 
6. Method of representation is 
(i). Matrix representation
(ii). Adjency list representation 



*/


// Program for a Undirected Graph with edges and Nodes as below 
//{1,2},{1,4},{2,3},{3,4},{4,5},{3,5}



#include <iostream>
#include <vector>
#include <array>

using namespace std;


int main(){
// lets assume we have a Graph with 5 Nodes and 6 Edges based on the connection between the nodes it will print the Graph representation 
array<array<int, 6>,  6> adjMat{0};
    // Graph store here 
    for(auto i=0;i<m;i++){
        int u,v;
        cout << "Enter the edges" << endl;
        cin >> u >> v;
        adjMat[u][v]=1;
        adjMat[v][u]=1;
    } 
    // print the Graph represnetation of the matrix 
    for(int i=0;i<m;i++){
        for(auto j=0;j<m;j++){
            cout << adjMat[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
} 


// Space Complexity O(n*n)
// Time Comlexity : O(E)


