#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

string isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return "NO";
        
    }
    return "Yes";
}

int main(int argc, char const *argv[])
{
    cout<< "Is given number Prime " << isPrime(57) << endl;
    return 0;
}
