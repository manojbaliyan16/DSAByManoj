#include <iostream>
using namespace std;

// GCD Or HCF
// Brute Force Approach 
/*
1. Find the min of given number 
2. Traverse from 1 to min number find in #1
3. If all given number is divisable by any number from 1 to number from #1, if not that will be the GCD 


*/
int Solve_1(int a, int b){
    int ans=1;
    for(int i=1;i<=min(a, b);++i){
        if(a%i==0 && b%i==0){
            ans=i;

        }
    }
    return ans;

}
/**
 * Space complesity o(1) no extra space 
 * Time Complexity O(n) due to for loop
 * 
*/

// Approach 2: Euclidean’s theorem.

/*
    GCD is a greatest commom number which devides the two number(a, b), if GCD devides the both a and b then it will also devides the a-b as well 

*/

int gcd(int a, int b){
    if(b==0) return a; // --> O(1)
    else return gcd(b, a%b) ; // i.e 2nd number is not zero in that case it is get called recurively with 2nd number is the first parameter and remainder of first number and 2nd number becomes the 2nd parameter
    // it will continue till 2nd number becomes zero
    // In this case larger number (a or b) will reduce by a factor of other 
    // So the time complexity will be O(log min(a,b))
}
//T(n)=O(log(min(a,b)));
// Original  Euclidean’s theorem used the substraction, we recursively substract from larger to smaller number 

// 
int main(int argc, char const *argv[])
{
    int a=12;
    int b=15;
    cout << "GCD of " << a << "and" << b << "using approach_1 " << Solve_1(a, b)<<endl; 
    cout << "GCD of " << a << "and" << b << "using approach_2 " << gcd(a, b)<<endl; 
  

    return 0;
}
