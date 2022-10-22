#include <iostream>
#include <vector>


using namespace std;


// Function 
long int Fact(int n){
    if (n==1){
        return 1;
    }
    return n*Fact(n-1);
}


int main(){
    cout << Fact(5) <<endl;
    return 0;

}