#include <iostream>
using namespace std;

/* Print N to 1 but not allowed to do decrement operation */


void Print(int count, int n){
    if(count > n){ 
        return;
    }
    Print(count+1,n);
    cout << count<< endl;
    
    

}

int main(){
    int n;
    cin >> n;

    Print(1,n);
    return 0;
}
