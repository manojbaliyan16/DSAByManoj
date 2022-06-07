//
// Created by Manoj Kumar on 07/06/22.
//Given an array of integers A, every element appears twice except for one. Find that integer that occurs once.
//
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> &vec){
    int ret=0;
    for(int i=0;i<vec.size();++i){
        ret=ret^vec[i]
    }
    return ret;
}

int main(){

}