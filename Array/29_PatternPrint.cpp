//
// Created by Manoj Kumar on 29/06/22.

//
/*
 * Print a Pattern According to The Given Value of A.

Example: For A = 3 pattern looks like:
 * */
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int> > Solve(int A){
    //Create A matrix with all rows filled with Zero
    vector<vector<int>> result(A, vector<int>(A)); // row and col are equal
    for(int i=0;i<A;++i){
        // start filling from last col
        int colIndex=A-1;
        for(int j=1;j<=i+1;++j){
            result[i][colIndex]=j;
            colIndex--;
        }
    }
    return result;
}
int main(){
    vector<vector<int>> ret=Solve(4);
    for(auto row:ret){
        for(auto num:row){
            cout << num << " ";
        }
        cout <<  "\n";
    }

}
