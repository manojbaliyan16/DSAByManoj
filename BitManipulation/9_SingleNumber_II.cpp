//
// Created by Manoj Kumar on 12/06/22.
//Given an array of integers, every element appears thrice except for one, which occurs once. find out the element which occurs ones

//
#include <iostream>
#include <vector>
using namespace std;
// 1. count the number set bit at every position store them into an intermediate array of int size
// 2. if the last bit is i%3 ==0 then put the 0 in the return result else 1 on the same location
// T(n)=32(n)
int solve(vector<int> &A){
    // Complexity for this algo is 32*number of input if it is 32 bit integer if it is 64 bit integer then  its value will 64 *n 
    // needs to be furgher optimized 

int result=0;
int count[32]={0};
int n=A.size();
for(int i=0;i<32;i++)
{
    for(int j=0;j<n;++j)
    {
        if((A[j]&1)){
            count[i]++;
        }
     A[j]=A[j]>>1;

    }
    // once inner loop will fill up at least one number into count array then it will process and update the result value 
    if(count[i]%3==0){
        result = result | (0<<i);
    }else if(count[i]%3==1){
        result=result|(1<<i);
    }
  //  result = result | ((count[i] % 3) << i); // extra Condition 
  
}
return result;
}

int main(){
    vector<int> vec{1,2,2,2,5,5,5};///{51,57,51,57,63,38,57,63,63,51};


    cout << solve(vec) << endl;
    return 0;
}
