//
// Created by Manoj Kumar on 21/06/22.
// Given a positive integer A, the task is to count the total number of set bits in the binary representation of all the numbers from 1 to A.
//

#include <iostream>
using namespace std;

long int largestPowerof2inRange(int n){
    int x=0;
    while((1<<x)<=n){ // 1<<x -> By  this we will create power of 2 
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
    long int numberofbitsTillmaxPowerof2=x*(1<<(x-1)); // = pow(2,x-1)*x , 1<<(x-1)=power(2,x-1)
    long int NumberOfmsbFrom2RaiseXtoN= (n-(1<<x)+1);  //n-pow(2,x)+1

    long int restInteger = n-(1<<x);// for which we have too call recursivley 
    long int ans=numberofbitsTillmaxPowerof2 %M +NumberOfmsbFrom2RaiseXtoN + countSetBits(restInteger) ;

    return ans%M;
}

int main(){
    int A=10000;
    cout << "Value of A is " << A << " "<< __LINE__ << endl;
    cout << "Total set bits " << countSetBits(A) << endl;
}
