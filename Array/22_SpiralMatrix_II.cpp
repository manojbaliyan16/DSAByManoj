//
// Created by Manoj Kumar on 25/06/22.

//
/*
 * Given an integer A, generate a square matrix filled with elements from 1 to A*A in spiral order.
 *
 * */
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> Solve(int n){
    vector<vector<int> > result(n, vector<int>(n));
    int ER= result.size()-1;
    int EC=result[0].size()-1;
    int SR=0;
    int SC=0;
    int val=1;
    while(SR<=ER && SC <=EC) {
        for (int col = SC; col <= EC; ++col) {
            result[SR][col] = val++;
        }
        for (int row = SR + 1; row <= ER; ++row) {
            result[row][EC] = val++;
        }
        if(SR<ER) {
            for (int col = EC - 1; col >= SC; --col) {
                result[ER][col] = val++;
            }
        }
        if (SC < EC) {
        for (int row = ER - 1; row > SR; --row) {
            result[row][SC] = val++;
        }
    }
        SR++;
        SC++;
        ER--;
        EC--;
    }
    return result;
}



int main(){
    int n=3;
    vector<vector<int> > ret= Solve(n);
    for(auto row:ret){
        for(auto elem:row){
            cout <<elem <<" ";
        }
        cout << " \n ";

    }

    return 0;
}