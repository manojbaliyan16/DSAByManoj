//
// Created by Manoj Kumar on 26/06/22.
//
/*Give a N * N square matrix A, return an array of its anti-diagonals.
 *
 * */
#include <iostream>
#include <vector>
using namespace std;


vector<vector<int> > Solve(vector<vector<int>> &vec){
    // Crarte a vector with 2*n-1 number of rows because Anti-diagonal array will have 2*n-1 rows, where n is the no. of rows in the given 2D array
    int n=vec.size();
    vector<vector<int>>ret(2*n-1, vector<int>(0));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;j++){
            ret[i+j].push_back(vec[i][j]);

        }
    }
    return ret;
}


int main(){
    vector<vector<int> > result{{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> ans= Solve(result);
    for(auto row:ans){
        for(auto num:row){
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}
