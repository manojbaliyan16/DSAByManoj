//
// Created by Manoj Kumar on 14/07/22.
//
/*
 * Given an array of integers, find two numbers such that they add up to a specific target number.
 * The function twoSum should return indices of the two numbers such that they add up to the target, where index1 < index2. Please note that your returned answers (both index1 and index2 )
 * are not zero-based. Put both these numbers
 * in order in an array and return the array from your function ( Looking at the function signature will make things clearer ).
 * Note that, if no pair exists, return empty list.
 * */

#include<iostream>
#include <vector>
#include <unordered_map>
#include <map>

using namespace std;
void SolveTest(){


}

vector<int> Solve(const vector<int> &vec, int target){
    vector<int> ret;
    unordered_map<int, int> hash;
    for(int i=0;i<vec.size();++i){
        int tmp=target-vec[i];
        if(hash.find(tmp)!=hash.end()){
            ret.push_back(hash[tmp]);
            ret.push_back(i+1);
            return ret;

        }
        if(hash.find(vec[i])==hash.end()){
            hash[vec[i]]=i+1;
        }
    }
    return ret;
}


int main(){
   vector<int> vec{2,7,11,15};
    vector<int> ret=Solve(vec, 9) ;
    for(auto num:ret){
        cout << num << " ";
    }
    return 0;
}