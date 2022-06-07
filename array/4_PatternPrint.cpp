//
// Created by Manoj Kumar on 07/06/22.
//Print a Pattern According to The Given Value of A.
//
//Example: For A = 3 pattern looks like:
//
//1 0 0
//
//1 2 0
//
//1 2 3
//
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int> > solve(int A){
    vector<vector<int> > ret2D{0,vector<int>(0,0)};
    vector<int> ret;
    for(int i=1;i<=A;++i){
        ret.clear();
        for(int j=1;j<=i;++j){
            ret.push_back(j);
        }
        ret2D.push_back(ret);

    }

    return ret2D;
}

int main() {
    int A=3;
    vector<vector<int>> ret=solve(A);
    for(auto row_obj : ret){

        for(auto elem:row_obj){
            cout << elem << " ";
        }
        cout << "\n";
    }

    return 0;
}