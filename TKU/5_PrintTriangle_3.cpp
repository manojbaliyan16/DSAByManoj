#include <iostream>
using namespace std;

void PrintTriangle(int n){
for(int i=1;i<=n;i++){
    for(int j=1; j<=i; j++){
        cout << i << " ";   
    }
     cout <<"\n";
    }

}

int main(){

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    PrintSquare(n);
    return 0;

}