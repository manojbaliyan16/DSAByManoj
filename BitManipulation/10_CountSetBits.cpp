//
// Created by Manoj Kumar on 21/06/22.
// Given a positive integer A, the task is to count the total number of set bits in the binary representation of all the numbers from 1 to A.
//

#include <iostream>
using namespace std;

long int largestPowerof2inRange(int n){
    int x=0;
    while((1<<x)<=n){
        x++;
    }
    return x-1;
}

long int countSetBits(int n){
    const unsigned int M = 1000000007;// first find the largest power of 2 whose value is less than or equal to n
    if(n==0){
        return 0;
    }
    long int x= largestPowerof2inRange(n); //x=powerof2
    long int numberofbitsTillmaxPowerof2=x*(1<<(x-1));
    long int msb2xton= (n-(1<<x)+1);

    long int restInteger = n-(1<<x);
    long int ans=numberofbitsTillmaxPowerof2 %M +msb2xton + countSetBits(restInteger) ;

    return ans%M;
}

int main(){
    int A=10000;
    cout << "Value of A is " << A << " "<< __LINE__ << endl;
    cout << "Total set bits " << countSetBits(A) << endl;
}
