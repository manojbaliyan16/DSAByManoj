#include <iostream>
using namespace std;


int main(){
   cout << "Enter the Value" << endl;
    int n;
    cin >> n;
     for(int i=1;i<=n;i++){
        for(int j=1;j <2*i;j++){
            cout <<"*"<<" ";
        }
        cout << "\n";
   }   
}