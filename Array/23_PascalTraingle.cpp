//
// Created by Manoj Kumar on 25/06/22.
//
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > Solve(int n){
    // create the memory with the number of rows that in n
    vector<vector<int> > ret(n, vector<int>());
    for(int i=0;i<n;++i){
        // Every row will be of different size so the we have to resize rows at every oteration
        ret[i].resize(i+1, 1);
        for(int j=1;j<i;++j){
            ret[i][j]=ret[i-1][j-1]+ret[i-1][j];
        }
    }
    return ret;

}


int main(){
    int n=10;
    vector<vector<int> > ret=Solve(n);
    for(auto row:ret){
        for(auto num:row){
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;

}
