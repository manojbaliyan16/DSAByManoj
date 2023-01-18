#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


// BruteForce Approach
vector<int> PrintAllDivisor(int n){
    vector<int> res;
    for(int i=1;i<=n;i++){
        if(n%i==0) res.push_back(i);
 
    }
    return res;
}
// Complexities 
// T(n) = O(n) due to for loop 
// S(n) = O(n)  due to extra space of a vector 

// More Efficient Approach 
// Intution 
// 1. If In  divison Quotioent is the divisor then answer will also be a divisor  Ex 36/2=18, 2 and 18 both are divisor
// Answer of a division starts becoming divisor from the sqrt of the number 
// here it takes advantage of the fact that if a divisor i of n is found, then n/i is also a divisor of n.
// Example n=36, q=2 then i=36/2=18; n/i is also a divisor of n--> 36/18=2 is also the divisor of n--means 2 and 18 both are the divisor 

//T(n)=O(sqrt(n));
void PrintDivisorOptimally(int n){
    for(int i=1;i<=sqrt(n);++i){
        if(n%i==0){
            cout << i << " "; // If i is a divisor check if n/i is also a divisor as well 
            if(i!=n/i){
                cout << n/i << " ";
            }
        }
    }
}
int main(){
    int n=36;
    vector<int> res=PrintAllDivisor(n);
    for(auto it:res){
        cout << it << " ";
    } 
    cout << "\nAll Divisor Optimally "  << endl;
    PrintDivisorOptimally(n);
    cout<< endl;
    return 0;
}