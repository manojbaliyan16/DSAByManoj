//
// Created by Manoj Kumar on 21/06/22.
// Given a positive integer A, the task is to count the total number of set bits in the binary representation of all the numbers from 1 to A.
//

#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;


// THIS IS THE NAVIE SOLUTION WILL GIVE TIME LIMIT EXCEED
/*
int Solve(uint32_t A){
    int count=0;
    for(int i=1;i<=A;i++){
        int num=i;
        while(num!=0)
        {
            if((num&1)==1){
                count++;
            }
             num=num>>1;
        }
    }

    return count;
}
 */
/*
 * 1. Calculate the LargestPowerOf2intragne (1<<(x-1))*x
 * 2. bitTill2x = n-(1<<x)+1
 * 3.find the rest number of bits and solve for the rest bits
 *
 *
 * */


int largestPowerof2inRange(int n){
    int x=0;
    while((1<<x)<=n){
        x++;
    }
    cout << "Value of x is " << x-1 << " "<< __LINE__ << endl;
    return x-1;
}
int countSetBits(int n){
    const unsigned int M = 1000000007;
    // first find the largest power of 2 whose value is less than or equal to n
    if(n==0){
        return 0;
    }
    int x= largestPowerof2inRange(n); //x=powerof2
    int numberofbitsTillmaxPowerof2=x*(1<<(x-1))%M;
    int msb2xton= n-(1<<x)+1;

    int restInteger = n-(1<<x);
    int ans=numberofbitsTillmaxPowerof2 +msb2xton + countSetBits(restInteger);
    ans%=M;
    return ans;


}
int main(){
    int A=10000;
    cout << "Value of A is " << A << " "<< __LINE__ << endl;
    cout << "Total set bits " << countSetBits(A) << endl;
}
