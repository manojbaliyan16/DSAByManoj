//
// Created by Manoj Kumar on 07/06/22.
// Write a function that takes an integer and returns the number of 1 bits it has.
//
#include <iostream>
#include <vector>
using namespace std;


int solve(uint32_t A){
    int count=0;
    for(int i=0;i<32;i++){
        if(A&1)==1{
            count++;
        }
        A=A>>1;
    }


    return count;
}