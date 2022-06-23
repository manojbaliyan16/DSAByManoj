//
// Created by Manoj Kumar on 23/06/22.
//
/*
 * Given an array A and an integer B. A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == B). Check if any good pair exist or not.
 * Return 1 if good pair exist otherwise return 0
 *
 * */
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


int Solve(vector<int> &vec, int B){
   unordered_set<int> ret;
   for(auto num:vec){
       int temp=B-num;
       if(ret.find(temp)!=ret.end()){
           return 1;
       }
       ret.insert(num);
   }
    return 0;

}
int main(){
    vector<int> A{1,2,3,4};
    int B=7;
    cout << " IsPairExist " << Solve(A,B) << endl;
    return 0;
}