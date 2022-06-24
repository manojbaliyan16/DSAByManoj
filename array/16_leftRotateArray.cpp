//
// Created by Manoj Kumar on 23/06/22.
//
/*
 * Given an array of integers A and multiple values in B, which represents the number of times array A needs to be left rotated.

Find the rotated array for each value and return the result in the from of a matrix where ith row represents the rotated array for the ith value in B.
 * */

//A=[1,2,3,4,5] B[0]=2
//0th Element of A will go its left but nothing is there on its left so technically we will assume it as rotatry element and it will come at last as below
// [1,2,3,4,5]---->[2,3,4,5,1]---->[3,4,5,1,2]

// Time Complexity O(n*m) // n is the size of A and m is the size of B
// Space Complexity O(n)


#include <iostream>
#include <vector>
using namespace std;
vector<int> leftRotate(vector<int> &A, int B){
    vector<int> ret;
    int n=A.size();
    for (int i = B; i<(B + n); ++i){
        ret.push_back(A[i%n]);
    }
    return ret;
}
vector <vector<int> > Solve(vector<int> &A, vector<int> &B){
    int n=B.size();
    vector<vector<int> > ret;
    for(int i=0;i<n;++i){
        ret.push_back(leftRotate(A, B[i]));
    }
    return ret;
}
int main(){
    vector<int> A{1,2,3,4,5};
    vector<int> B{2,3};
    vector<vector<int> > result=Solve(A,B);

    for(auto num:result){
        for(auto elem:num){
            cout << elem << " ";
        }
        cout << "\n";
    }

}

