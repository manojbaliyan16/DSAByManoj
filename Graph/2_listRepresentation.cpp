#include<iostream>
#include <vector>
/*
    1-----------2---------5
    |           |         |
    |           |         |
    |           |         |
    |           |         |
    3-----------4---------|  
    0
    1-->{2,3}
    2-->{1,4,5}
    3--->{1,4}
    4--->{2,3,5}
    5--->{2,4}
    Total Space covered is Twice of the number of edges, 
    S.C = O(2*E) ~ O(E)


    Here We will have an array of size n+1 (1 indexed)
    and this array will have the list (means every undex will have a sequence of numbers means a vector)
    so instead of taking the 2D Array we will take an array of vector
    vector<int> adj[n+1]; // it takes less space then 2D vector 
*/
using namespace std;
int main(){ 

    int n,m;
    cout << "Enter the total number of Nodes and Edges " << endl;
   cin >> n >> m;
    vector<int> adj[n+1];  // an array of vector 
    for(int i=0;i<m;++i){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);// This will be used only if the Graph is undirected 
    }
    for(auto rows:adj){
        for(auto elem:rows){
            cout << elem << " ";
        }
        cout << endl;
    }
}

/*
    This is the adjacent list of undirected graph 
    time complexity O(2E) // basically O(2E+v) 
    Space Comlexity O(E)

*/