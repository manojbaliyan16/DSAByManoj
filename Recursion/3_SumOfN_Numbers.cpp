#include <iostream>
using namespace std;

// Parameterize recursion Pattern
void Solve(int i, int sum){
    if(i<1){
        cout << sum << endl;
        return ;
    }
    Solve(i-1, sum+i);

}
// Functional means function itslef will return the value

int Solve(int n){
    if(n==0){
        return 0;
    }
   return n+Solve(n-1);
}
int main(){

    Solve(6,0);
    cout << Solve(6) << endl;
    return 0;


}