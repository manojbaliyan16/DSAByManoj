#include <iostream>
#include <vector>


using namespace std;

class Solution{
    bool CycleDetectBFS(int s, vector<int> &vis, int v, vector<int> adj[]){
        vis[s]=1; // particular node has been visited
        queue<int> q;
        q.push(s);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:adj){
                if(!vis[it]){
                    vis[it]=1;
                    q.push
                }
            }
        }

        return true;
    }
    public:
    bool IsCycle(int v, vector<int> adj[]){
        vector<int> vis(v,0);
        for(int i=0;i<v;++i){
            if(!vis[i]){
                if(CycleDetectBFS(i, vis, v, adj)){
                    return true;
                }
            }
        }
        return false;
    }
};


void addEdge(int u, int v, vector<int> adj[]){
    adj[u].push_back(v);
    adj[v].push_back(u);
    
}
int main(){

    vector<int> adj[5];
    addEdge(0,1,adj);
    addEdge(0,2,adj);
    addEdge(2,3,adj);
    addEdge(1,3,adj);
    addEdge(2,4,adj);
    Solution
    bool Cycle=IsCycle(v, adj);
    return 0;
}