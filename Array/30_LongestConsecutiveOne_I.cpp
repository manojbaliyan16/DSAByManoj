//
// Created by Manoj Kumar on 29/06/22.
//
/*Given a binary array, find the maximum number of consecutive 1s in this array.

 * */
#include <string>
#include <iostream>
#include <vector>


using namespace std;
int Solve(vector<int> &vec) {
int res=0;
int cnt=0;
for(auto num:vec){
   cnt=(num==0)?0:cnt+1;
   res=max(res,cnt);
}
return res;
}

int main(){
    vector<int> res{1,0,1,1,0,1,1,1,1};
    cout << " longest Consecutive 1's length is " << Solve(res);
    return 0;
}
