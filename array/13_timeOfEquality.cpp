//
// Created by Manoj Kumar on 23/06/22.
/*
 * Given an integer array A of size N. In one second, you can increase the value of one element by 1.

Find the minimum time in seconds to make all elements of the array equal.
 * */
//

#include <iostream>
#include <vector>
using namespace std;


int Solve(vector<int> &vec){
    int max=*max_element(vec.begin(), vec.end());
    int cnt=0;
    for(auto num:vec){
        while(num!=max){
            cnt++;
            num++;
        }
    }
    return cnt;
}

int main(){
    vector<int> A{2,4,1,3,2};
    cout << "min time is " << Solve(A) << endl;
}
