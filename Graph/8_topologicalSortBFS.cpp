#include <iostream>
#include <vector>
#include <queue>


using namespace std;



class Solve{

    public:
    	vector<int> topoSort(int V, vector<int> adj[])
	{
		vector<int> indegree(V,0);
		for (int i = 0; i < V; i++) {
			for (auto it : adj[i]) {
				indegree[it]++;
			}
		}

		queue<int> q;
		for (int i = 0; i < V; i++) {
			if (indegree[i] == 0) {
				q.push(i);
			}
		}
		vector<int> topo;
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			topo.push_back(node);
			// node is in your topo sort
			// so please remove it from the indegree

			for (auto it : adj[node]) {
				indegree[it]--;
				if (indegree[it] == 0) q.push(it);
			}
		}

		return topo;
	}
};
// Topological Sort: If there is an edge u, v then in linear ordering u must always come before v
// Topological sort possible only in DAG
// 

vector<int> TopoSort(int V, vector<int> adj[]){
    vector<int> indegree(V,0);
    for(int i=0;i<V;++i){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<V;++i){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int> topo;
    while(!q.empty()){
        int node =q.front(); q.pop();
        topo.push_back(node);
        for(auto itr:adj[node]){
            // as node move to the topo sort hence remove the indegree due to this node 
            indegree[itr]--;
            if(indegree[itr]==0){
                q.push(itr);
            }
        }
    }
    return topo;
}
void addEdge(int u, int v, vector<int> adj[]){
    adj[u].push_back(v);
}


int main(){
    vector<int> adj[6];
   

    addEdge(5,0,adj);
    addEdge(4,0,adj);
    addEdge(5,2,adj);
    addEdge(2,3,adj);
    addEdge(3,1,adj);
    addEdge(4,1,adj); //*/  //vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    //Solve s;
    int V=6;
    vector<int> ret=TopoSort(V, adj);
//   Solve s;
 //  vector<int> ret=s.topoSort(V,adj);
   for(auto elem: ret){
        cout << elem << " ";
    }

    return 0;



}