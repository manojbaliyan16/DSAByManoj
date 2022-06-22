//
// Created by Manoj Kumar on 12/06/22.
//Given an array of integers, every element appears thrice except for one, which occurs once.

//
#include <iostream>
#include <vector>
using namespace std;
// 1. count the number set bit at every position store them into an intermediate array of int size
// 2. if the last bit is i%3 ==0 then put the 0 in the return result else 1 on the same location
// T(n)=32(n)
int solve(vector<int> &A){
/*
int count[32]={0};
int ret=0;
int n= A.size();
for(int i=0;i<32;++i)
{
    for(int j=0;j<n;++j)
    {
        if(A[j >> i] & 1){
            count[i]++;
        }
    }
    if(count[i]%3==0){
        ret |=(0<<i);
    }
    else{
        ret|=(1<<i);
    }
}
return ret;*/
    int n = A.size();
    int count[32] = {0};
    int result = 0;
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < n; j++) {
            if ((A[j] >> i) & 1) {
                count[i]++;
            }
        }
        if (count[i]%3==0)
        {
            result |= (0<<i);
        }
        else if(count[i]%3==1)
        {
            result |= (1<<i);
        }
        // result = result | ((count[i] % 3) << i);
    }
    return result;
}

int main(){
    vector<int> vec{1,1,1,3,3,3,5,4,4,4};


    cout << solve(vec) << endl;
    return 0;
}
