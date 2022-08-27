//
// Created by Manoj Kumar on 09/06/22.
// Given two binary strings, return their sum (also a binary string
//
#include <iostream>
using namespace std;


string solve(string a, string b){
    int m=a.length()-1;
    int n=b.length()-1;
    int carry=0;
    string res;

    while (m >=0 || n >=0 ){
        int p=(m>=0)?a[m--]-'0':0;
        int q=(n>=0)?b[n--]-'0':0;
        int sum=p+q+carry;
        res= to_string(sum%2)+res;
        carry=sum/2;
    }
    return carry==1?("1"+res):res;

}

int main(){
    string a="100";
    string b="11";
    cout << solve(a,b)<< endl;

}