#include <iostream>
using namespace std;


int main(){
    cout << "Enter the Value" << endl;
    int n;
    cin >> n;
     for(int i=n;i>=1;i--){
        for(int j=1;j <=i;j++){
            cout <<j<< " ";
        }
        cout << "\n";
   }  
}