#include <iostream>
#include <vector>


using namespace std;

/*

    Here Every edge will have the any fix weight also, 
    Stragey is we will put the wieght with the edge using pair 
    // let say : 
    To represent unidirect grpah with matrix we can use as below 
    // Undirected Graph
    int u,v,wt;
    cin >> u >> v >> wt;
    adj[u][v]=wt;
    adj[v][u]=wt;
    // Directed Graph
    adj[u][v]=wt;
    **********
    list representation 


*/


#include <iostream>



using namespace std;


int main(){
    int n,m;
    cout << "Enter the Node  and Edges " << endl;
    cin >> n >> m ;


    vector<pair<int, int> > adjList[n+1];

    for(int i=0;i<m;i++){
        int u,v,w;
        cout << "Enter Edges u, v and Wieght w" << endl;
        cin >> u >> v >> w ;
        adjList[u].push_back({v,w});
    }
cout << " ***** Graph ****  " << endl;
    for(auto row:adjList){
        for(auto elem:row){
            cout <<elem.first <<"  "<< elem.second << " ";
        }
        cout << endl;
    }
}