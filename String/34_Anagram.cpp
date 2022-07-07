//
// Created by Manoj Kumar on 07/07/22.
//
/*Given an array A of N strings, return all groups of strings that are anagrams.

Represent a group by a list of integers representing the index(1-based) in the original list. Look at the sample case for clarification.
 */
#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<vector<int> > Solve(vector<string> &str){
    vector<vector<int> > ret;
    map<string, vector<int>> mymap;
    for(int i=0;i<str.size();++i){
        string tmp=str[i];
        sort(tmp.begin(), tmp.end());
        mymap[tmp].push_back(i+1);
    }
    for(auto &itr:mymap){
       ret.push_back(itr.second);
    }
    return ret;
}

int main(){
    vector<string> str{"cat", "dog", "god", "tca"};
    vector<vector<int> > result= Solve(str);
    for(auto row:result){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << "\n";
    }
    return 0;
}

