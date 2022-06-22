//
// Created by Manoj Kumar on 22/06/22.
//
/*Given an array of integers A of size, N. Find the longest subsequence of A, which is odd-even.
 * */
#include <vector>
#include <iostream>
using namespace std;

int Solve(vector<int> &vec)
{
    int cnt1=0;
    int cnt2=0;
    int evenNum=0;
    int oddNum=1;
    for(auto num:vec){
        num=num%2;
        if(num==oddNum){
            cnt1++;
            oddNum^=1;
        }
        if(num==evenNum){
            cnt2++;
            evenNum^=1;
        }
    }
    return max(cnt1,cnt2);
}

int main(){
    vector<int> vec{1,2,2,5,6};
    cout<<"Number of elements in sequence  " << Solve(vec) << endl;
}