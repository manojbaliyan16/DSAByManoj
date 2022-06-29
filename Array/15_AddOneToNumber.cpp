//
// Created by Manoj Kumar on 23/06/22.
/*Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

The digits are stored such that the most significant digit is at the head of the list
 *
 * */
//
#include <iostream>
#include <vector>
using namespace std;

vector<int> Solve(vector<int> &A){
    reverse(A.begin(), A.end());
    int carry=1;
    int sum=0;
    for(auto &num:A){
        sum=num+carry;
        if(sum<10){
            carry=0;
            num=sum;
            break;
        }else{
            num=0;
        }
    }
    if(carry){
        A.push_back(carry);
    }
    reverse(A.begin(),A.end());
    while(A.front()==0){
        A.erase(A.begin());
    }
    return A;
}

int main(){
    vector<int> A{1,2,3};
    vector<int> vec=Solve(A);

    for(auto num:vec){
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}