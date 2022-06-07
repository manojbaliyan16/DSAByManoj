//
// Created by Manoj Kumar on 07/06/22.
// You are given an array of distinct integers A, you have to find and return all elements in array which have at-least two greater elements than themselves.
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(vector<int> &vec){
    int fm=INT_MIN;
    int sm=INT_MIN;
    vector<int> ret;
    for(auto num:vec){
        if(num > fm){
            sm=fm;
            fm=num;
        } else if(num > sm){
            sm=num;
        }
    }
    for(auto num:vec){
        if( num < sm){
            ret.push_back(num);
        }
    }
    return ret;
}
int main() {
    vector<int> v{5,6,1,2,3,9};
    vector<int> x =solve(v);
    for(auto num:x){
        cout << num << " " ;
    }
    return 0;
}

