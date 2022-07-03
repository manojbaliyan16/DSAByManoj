//
// Created by Manoj Kumar on 01/07/22.

//
/*Given a binary array, find the maximum number of consecutive 1s in this array if you can flip at most one 0. */
/* WhenEver we encounter 0, we can flip to 1 and this can participate to increase the count for 1's, In this case when we encounter 0 still we have to accumulate the
 * 1's count and then we need one more variable current to save the current value of count, after accumulating its value reset cnt to 0
 * In this case cnt can always be used to count the pure consecutive 1s, then we can use it to update the final result  */
//TC = O(n)

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