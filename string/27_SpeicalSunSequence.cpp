//
// Created by Manoj Kumar on 28/06/22.
//
/*
 * */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//BruteForce Approach
/*
int Solve(string s){
    int l=s.length();
    int count=0;
    for(int i=0;i<l;++i){
        if(s[i]=='A'){
            for(int j=i;j<l;++j){
                if(s[j]=='G'){
                    count++;
                }
            }
        }
    }
    return count;
} */

int Solve(string str){
    const int mod=1000000000+7;
    int len=str.length();
    int countOfA=0;
    int totalCount=0;

    for(auto ch:str){
        if(ch=='A'){
            countOfA++;
        } else if(ch=='G'){
            totalCount+=countOfA;
        }
    }
    return totalCount%mod;
}
int main(){
    string str="ABCGAG";
    cout << "Number of AG subsequence are " << Solve(str) << endl;
    return 0;
}