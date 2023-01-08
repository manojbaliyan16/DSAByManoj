#include <iostream>
using namespace std;

void Print7(int n ){
     for(int i=0;i<n;i++){
      //space
       for(int j=0;j<n-i;j++){
         cout<< " ";
       }
        for(int k=0;k<=2*i;k++){
            cout <<"*";
        }
         for(int j=0;j<n-i;j++){
         cout<< " ";
       }
        cout << "\n";
   }  
}

int main(){
   cout << "Enter the Value" << endl;
    int n=5;
    Print7(5);
    return 0;
    
}