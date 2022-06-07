//
// Created by Manoj Kumar on 07/06/22.
//Given an array of integers A, every element appears twice except for one. Find that integer that occurs once.
//
#include <iostream>
#include <vector>
using namespace std;

uint32_t solve(uint32_t A){
    uint32_t ret=0;
    for(int i=0;i<32;++i){
        if(A && 1==1){
            ret = (ret << 1)+1;
        }else{
            ret = ret << 1;
        }
        A = A >> 1;
    }
    return ret;
}

int main(){
    uint32_t A=3;
    cout << solve(A)<< endl;
    return 0;
}
