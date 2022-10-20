/**
 * @file 2.cpp
 * 
 * 
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-10-20
 * 
 * @copyright Copyright (c) 2022
 * 
 * 1. Print name 5 times 
 * 2. Print linearlty from 1 to N 
 * 3 Print N to 1 
 * Print Linearly from 1 to N  Back Tracking
 * Print from N to 1-- Back tracking 
 */

// TC = O(n) beacuser we are calling n different fucntion 
// SC = O(n)  Here internal memory means stack is used 

#include <iostream>
using namespace std;

void PrintName(int cnt, int n){
    if(cnt==n){
        return; 
    }
    cnt++;
    cout << "manoj" << endl;
    PrintName(cnt, n);
}

int main(){
    int cnt=0;
    int n;
    cin >> n;
    PrintName(cnt,n);
    cout << "\n";
    return 0;
}
