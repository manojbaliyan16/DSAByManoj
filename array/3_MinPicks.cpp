//
// Created by Manoj Kumar on 07/06/22.
//You are given an array of integers A of size N.
//Return the difference between the maximum among all even numbers of A and the minimum among all odd numbers in A.
//
//You are given an array of integers A of size N.
// Return the difference between the maximum among all even numbers of A and the minimum among all odd numbers in A.
//
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &vec){

    int evenMax=INT_MIN;
    int oddmin=INT_MAX;
    for(auto num:vec){
        if(num%2 ==0){
            evenMax=max(num, evenMax);
        }
        else{
            oddmin=min(num, oddmin);
        }
    }
    return evenMax-oddmin;
}

int main() {
    vector<int> v{0, 2, 9};
    int x=solve(v);
    cout << x << endl;
    return 0;
}

