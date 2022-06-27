//
// Created by Manoj Kumar on 27/06/22.
/*
Given a binary sorted matrix A of size N x N. Find the row with the maximum number of 1.
NOTE:

If two rows have the maximum number of 1 then return the row which has a lower index.
Rows are numbered from top to bottom and columns are numbered from left to right.
Assume 0-based indexing.
Assume each row to be sorted by values.
Expected time complexity is O(rows).
 */

//
/*Approach is given i n question
 * 1. All rows are sorted
 * 2. max ones --> return lower index --> we have to check the index from where ones starts
 * */
#include <iostream>
#include <vector>
using namespace std;

int Solve(vector<vector<int>> &vec){
    int rows=vec.size();

    int currentColIndex=vec[0].size()-1;
    int RowMaxOnes=0;
   for(int i=0;i<rows;++i){

       while(currentColIndex >=0 && vec[i][currentColIndex]){
           RowMaxOnes=i;
           currentColIndex--;
       }
   }
   return RowMaxOnes;
}
int main(){
    vector<vector<int> > matrix{{0,0,0,1,1},{0,0,0,0,0},{0,1,1,1,1},{1,1,1,1,1}};
    cout << "Row Index with Max Ones is " << Solve(matrix) << endl;
    return 0;

}