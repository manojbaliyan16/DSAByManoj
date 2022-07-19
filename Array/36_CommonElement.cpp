//
// Created by Manoj Kumar on 14/07/22.
//
#include <iostream>
#include <vector>
using namespace std;

// Time Complexity : O(nlogn+mlogm) ~ o(nlogn)
// Space Complxity O(n)  // smallest array size
vector<int> Solve(vector<int> &A, vector<int> &B){
    int LA=A.size();
    int LB=B.size();
    vector<int> ret;
    if(LA==0 || LB==0){
        return ret;
    }
    int Aptr=0;
    int Bptr=0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    while(Aptr < LA && Bptr < LB){
        if(A[Aptr]==B[Bptr]){
            ret.push_back(A[Aptr]);
            Aptr++;
            Bptr++;
        }
        else if(A[Aptr]<B[Bptr]){
            Aptr++;
        }else{
            Bptr++;
        }
    }
    return ret;
}

int main(){
    vector<int> A{1, 2, 2, 1};
    vector<int> B{2, 3, 1, 2};
    vector<int> result= Solve(A, B);
    for(auto elem:result){
        cout << elem << " ";
    }
    return 0;
}