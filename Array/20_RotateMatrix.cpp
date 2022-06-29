//
// Created by Manoj Kumar on 24/06/22.
//
/*You are given a n x n 2D matrix A representing an image.

Rotate the image by 90 degrees (clockwise).

You need to do this in place.
 * */
#include <iostream>
#include <vector>
using namespace std;
// Approach: Transpose the matrix and then reverse the each row

vector<vector<int> > Solve(vector<vector<int> > &A){
    int row=A.size();
    for(int i=0;i<row;++i){
        for(int j=i+1;j<row;++j){
            swap(A[i][j],A[j][i]);
        }
        reverse(A[i].begin(), A[i].end());
    }
    return A;
}
int main(){
    vector<vector<int> > A{{1,2},{3,4}};
    vector<vector<int> > result= Solve(A);
    for(auto row:result){
        for(auto num:row){
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}