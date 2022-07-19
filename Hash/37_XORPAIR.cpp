//
// Created by Manoj Kumar on 19/07/22.
//
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;


// B is the target result between the XOR of 2 numbers from the Array
// BruteForce
// Using two for loop O(n*n)
// Optimized will make a map with the values of vector as Key of the Map and all these keys having values as 1
// By mathematics as below example
// 10=15^5 --> 10^15=15^15^5---->10^15=5
// So we will proceed as finding a key which equal to the elem^B.
// lets us we found a key as 10 in the vector
// required = 15 ^ 5 // if this -->m 10
// If this 10 also present in the vector so we will go into if condition 2 times and increased the value of count two times
// so at the return time just return count/2

int Solve(vector<int> &vec, int B){
    unordered_map<int, int> hash;
    int count=0;
    for(int i=0;i<vec.size();++i){
        hash[vec[i]]=1;
    }
    for(auto num:vec){
        int required=num^B;
        if(hash.find(required)!=hash.end()){
            count++;
        }
    }
    return count/2;
}
int main(){
    vector<int> test{5, 4, 10, 15, 7, 6};
    int B=5;
    cout << "The number of pair present is/are " << Solve(test, B) << endl;
    return 0;
}