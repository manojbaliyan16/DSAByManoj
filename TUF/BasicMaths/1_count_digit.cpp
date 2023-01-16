// Given a number N. Count the number of digits in N which evenly divides N.
#include <iostream>
#include <vector>

using namespace std;


int Solve(int n){
    int count=0;
    int num=n;
    int digit=0;
    while(n){
        digit=n%10;
        if(digit!=0){
            if(num%digit==0){
                count++;
            }
        }
        n=n/10;
        
    }
return count;
}


int main(){

    cout << "The number of digit in given number is = " << Solve(22074)<< endl;
    return 0;
}

