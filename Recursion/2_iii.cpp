#include <iostream>
using namespace std;

/* Print 1 to N but not allowed to do increment operation */


void Print(int count, int n){
    if(count < n){ 
        return;
    }
    Print(count-1,n);
    cout << count<< endl;
    
    

}

int main(){
    int n;
    cin >> n;

    Print(50,n);
    return 0;
}
