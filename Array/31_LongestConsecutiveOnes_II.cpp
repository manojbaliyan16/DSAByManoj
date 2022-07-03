//
// Created by Manoj Kumar on 01/07/22.

//
/*Given a binary array, find the maximum number of consecutive 1s in this array if you can flip at most one 0. */


#include <iostream>
#include <vector>
using namespace std;

int Solve(vector<int> &vec){
    int res=0;
    int cnt=0;
    int cur=0;
    for(auto num:vec){
        cnt++;
        if(num==0){
            cur=cnt;
            cnt=0;
        }
        res=max(res,cnt+cur);
    }
    return res;
}

int main(){
    vector<int> vec{1,0,1,1,0,1,1,1};
    cout << "Max Consecutive Ones are " << Solve(vec) << endl;
    return 0;
}