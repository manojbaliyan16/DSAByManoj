#include <iostream>
using namespace std;

void PrintSquare(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j < n; j++){
            cout << "*" << " ";
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