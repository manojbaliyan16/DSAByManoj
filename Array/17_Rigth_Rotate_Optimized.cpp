//
// Created by Manoj Kumar on 24/06/22.
//
/*
 * Right rotate the array with multiple rotation
 * Space Complexity Should Be O(1) and T(n) = O(n)
 * */
//A =[1,2,3,4,5,6,7] , B=3  ===> [5, 6, 7, 1, 2, 3, 4]
// Steps
//1. [1,2,3,4 || 5,6,7] -- reverse both sub arrays in place [ 4,3,2,1 || 7, 6,5 ]  --reverse whole array [5,6,7,1,2,3,4]
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> Solve(vector<int> &A, int B){
    reverse(A.begin(), A.end()-B);
    reverse(A.end()-B, A.end());
    reverse(A.begin(), A.end());
    return A;
}

int main(){
    vector<int> A{1,2,3,4,5,6,7};
    int B=3;
    vector<int> ret=Solve(A,B);
    for(auto num:ret){
        cout << num << " ";
    }
    return 0;
}