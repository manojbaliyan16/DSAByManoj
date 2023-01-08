#include <iostream>
using namespace std;

void Print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j < n; j++){
            cout << "*" << " ";
        }
        cout <<"\n";
    }
}
void Print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout <<"\n";
    }
}

void Print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout <<"\n";
    }
}

void Print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i; j++){
        cout << i << " ";   
    }
     cout <<"\n";
    }

}

void Print5(int n){
  for(int i=n;i>=1;i--){
        for(int j=i;j >=1;j--){
            cout << "*";
        }
        
        cout << "\n";
   }     
}

void Print6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j <=i;j++){
            cout <<j<< " ";
        }
        cout << "\n";
   } 
}

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

void Print8(int n){
   // rows
   for (size_t i = 0; i < n; i++)
   {
      // space in the beginning 
      for (size_t j = 0; j <=i; j++)
      {
         cout <<" ";   
      }
      // print *
      for (size_t j = 0; j < 2*n -(2*i+1); j++)
      {
         cout << "*";
      }

      // space in the end 
      for (size_t j = 0; j <= i; j++)
      {
         cout <<" ";   
      }
      cout << "\n";
  
   }    
}

void Print9(int n){
    Print7(n);
    Print8(n);
}

void Print10(int n){
    Print2(n);
    Print5(n);
}

int main(int argc, char const *argv[])
{
    int n=5;
    cout << "\n";
    cout << "*********************1************************* ";
    cout << "\n";
    Print1(n);
    cout << "\n";
    cout << "*********************2************************* ";
    cout << "\n";
    Print2(n);
    cout << "\n";
    cout << "**********************3************************ ";
    cout << "\n";
    Print3(n);
    cout << "\n";
    cout << "**********************4************************ ";
    cout << "\n";
    Print4(n);
    cout << "\n";
    cout << "**********************5*********************** ";
    cout << "\n";
    Print5(n);
    cout << "\n";
    cout << "**********************6*********************** ";
    cout << "\n";
    Print6(n);
    cout << "\n";
    cout << "***********************7********************* ";
    cout << "\n";
    Print7(n);
    cout << "\n";
    cout << "**********************8********************** ";
    cout << "\n";
    Print8(n);
    cout << "\n";
    cout << "*********************9*********************** ";
    cout << "\n";
    Print9(n);
    cout << "\n";
    cout << "*********************10*********************** ";
    cout << "\n";
    Print10(n);
    
   // Print1(n);
    //Print1(n);

    


    return 0;
}
