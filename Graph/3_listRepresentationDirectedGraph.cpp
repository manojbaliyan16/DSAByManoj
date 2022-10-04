#include <iostream>
#include <vector>

using namespace std;
/*
    here edge between u and v as being directed opposite is not true
    So Space needed to store a Graph using the adjecny list is E locations 
    So Space Complexity =O(E)
    and Obvious Time Complexity is also O(E)
*/

int main(){

    int n,m;
    cout << "Enter The nOdes and Edges " << endl;
    cin >> n >> m;
    vector<int> arr[n+1];

    for(auto i=0;i<m;++i){
        int u,v;
        cout << "Enter the edges  " << endl;
        cin >> u >> v;
        arr[u].push_back(v); // As it is a directed graph so connection will be in 1 dirction only
    }

    for(auto rows:arr){
        for(auto elem:rows){
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}