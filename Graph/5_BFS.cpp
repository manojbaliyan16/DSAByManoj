/*
Below size of the array based on 1 - index 
0 {}
1 {2,6}
2 {1 3 4}
3 {2}
4 {2,5}
5 {4,8}
6 {1 7 9}
7 { 6 8 }
8 {5 7}
9 { 6 }
To traverse Using BFS below points need to be consider 
1. Initital Point Configuration / starting point put it in the queue and marked it visited in array 
2. Take it neighbours as per adjency list put them in to queue marked visited in the array if not marked already and so on 
*/

/*
    Space Complexity : Space taken by Queue + visisted Array + Space to store the Graph  = O(n)+O(n)+O(n) ~ O(n)

    Time Complexity : before the for loop node goes into bfs vector -->   for loop running for all degrees(2*E) of the node 
    aNd while loop itslef running for O(n) times 
    So TC O(n+2E)


*/
#include <iostream>
#include <queue>
#include <vector>

using namespace std;


class BFS{
    public:
    BFS()=default;
    vector<int> BFSOfGraph(int V, vector<int> adj[]);

};
vector<int> BFS::BFSOfGraph(int V, vector<int> adj[]){
     // array of visited nodes, size equal to V in case of zero-index
    int vis[5]={0};
    // queue ti track the nodes
    queue<int> q;
    // vector to return the visited nodes in sequence 
    vector<int> bfs;
    // initial configuration
    vis[0]=1; // marks starting point as visited
    q.push(0); // strating nodes enter into queue
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        // find the neigbhours of the visted node marked them visited and enter into the queue 
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
    return bfs;
}
// UndirectedGraph
void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int>& ret){
    for(auto i:ret){
        cout << i << " ";
    }
    cout << "\n";
}

int main(){
    vector<int> adj[6];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,0,4);
    BFS obj;
    vector<int> ret=obj.BFSOfGraph(5,adj);
   print(ret);
    cout << endl;
    return 0;
}