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

void Print11(int n){
    // Observations: 
    // 1. Number of rows equal to number of input
    // 2. Even number rows start with 1
    int start=0; 
    for (size_t i = 0; i < n; i++)
    {
        if(i%2==0){
            start=1;
        }else{
            start=0;
        }

        for (size_t j = 0; j <= i; j++) // right angle triagle print
        {
            cout << start << " ";
            //flipt the start value as start is either 1 0r 0
             start =1-start;
        }
        cout << "\n";
        
        
    }
    
}

void Print12(int n){
    // Observation 
    // number space number
    // number + space + number =2*rows
    // space always reduce by 2 
    int space = 2*(n-1); // because when n=1 space 

    for (size_t i = 1; i <= n; i++){
        // number
        for(int j=1;j<=i;++j){
            cout <<j;
        }
        //space
        for(int j=1;j<=space;j++){
            cout << " ";
        }
        // number but in reverse order 
        for(int j=i;j>=1;--j){
            cout <<j;
        }
        cout<< "\n";
        space -=2;
    }
    
}

void Print13(int n){
     int num=1;
    for (size_t i = 1; i <= n; i++)
    {
        for(int j=1;j<=i;++j){
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
    
}
void Print14(int n){
    
    for (size_t i = 0; i < n; i++)
    {    char ch='A';
        for (size_t j = 0; j <= i; j++)
        {
            cout << ch<< " ";
            ch+=1;
        }
        cout << "\n";
        
    }
    

}

void Print15(int n){
    
    for (size_t i = 0; i < n; i++)
    {    char ch='A';
        for (size_t j = n; j > i; j--)
        {
            cout << ch<< " ";
            ch+=1;
        }
        cout << "\n";
        
    }
    

}
void Print16(int n){
    char ch='A'-1;
    for (size_t i = 0; i < n; i++)
    {
        char ch='A'+i;
       for(int j=0;j<=i;j++){
        cout << ch << " ";
       }
       cout << "\n";
    }
    
}
void Print17(int n){
    for (size_t i = 0; i < n; i++)
    {   
        //space
        for (size_t j =0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        //char 
        char ch='A';
        int breakPoint=(2*i+1)/2; //ABCBA let is here we have to print 5 char so upto 5/2+1 increasing sequencially and then decreasing
        for(int k=1;k<=(2*i+1);k++){
            cout << ch;
            if(k<=breakPoint){
                ch++;
            }else{
                ch--;
            }
            
        }
        //space 
        for (size_t j =0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<"\n";
        
    }
    
}
void Print18(int n){
   /*  for(int i=0;i<n;i++){
        char ch='A'+n-1;
        ch=ch-i;
        for(int j=0;j<=i;++j){
           cout << ch << " ";
           ch=ch+1;
        }
        cout << "\n";
    } */
     // outer loop Number of Rows
    for(int i=0;i<n;++i){

        //char print
        for(char ch='E'-i;ch <='E';ch++){
            cout << ch << " ";
        }
        cout << "\n";
    }
}
void Print19(int n){
    // stars n-i
    // i=0, i=i+2 ----->
    // stars n-i
    int space=0;
    for(int i=0;i<n;++i){
        /************First Part*******************/
        // stars
        for(int j=0;j<n-i;j++){
            cout <<"*";
        }
        // space
        for (size_t j = 0; j < space; j++)
        {
            cout<<" ";
        }
        
        //stars
        for(int j=0;j<n-i;j++){
            cout <<"*";
        }
        space+=2;
        cout<< "\n";
    }
    /****************2nd Part *****************/
    // stars    space star
    //  1         8     1
    //  2         6     2
    //  3         4     3
    //  4          2     4
    //  5          0      5
    space=8;
    for (size_t i = 1; i <= n; i++)
    {
            // stars
        for(int j=0;j<i;j++){
            cout <<"*";
        }
        // space
        for (size_t j = 0; j < space; j++)
        {
            cout<<" ";
        }
        
        //stars
        for(int j=0;j<i;j++){
            cout <<"*";
        }
        space-=2;
        cout<< "\n";
    }
    

}
void Print20(int n){
    /* first portion*/
    // stars space stars
    // 1  8 1
    // 2  6 2
    // 3  4 3
    //.......
    /***************first part *******************/
    int space=8;
    for (size_t i = 1; i <= n; i++)
    {
            // stars
        for(int j=0;j<i;j++){
            cout <<"*";
        }
        // space
        for (size_t j = 0; j < space; j++)
        {
            cout<<" ";
        }
        
        //stars
        for(int j=0;j<i;j++){
            cout <<"*";
        }
        space-=2;
        cout<< "\n";
    }

    /***************Second part *******************/
    space =0;
    for(int i=0;i<n;++i){
        
        // stars
        for(int j=0;j<n-i;j++){
            cout <<"*";
        }
        // space
        for (size_t j = 0; j < space; j++)
        {
            cout<<" ";
        }
        
        //stars
        for(int j=0;j<n-i;j++){
            cout <<"*";
        }
        space+=2;
        cout<< "\n";
    }
}
void Print21(int n){
    // Print the square means we have to print the stars only on boundries 
/*
    * * * *
    *     *
    *     *
    *     *
    * * * * 
    */
    // conditions where we have to print the stars are as below 
    // i=0, j=0, i=n-1 j=n-1
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }

        }
        cout <<"\n";
        
    }
    

}

int main(int argc, char const *argv[])
{
    int n=5;
    Print21(n);
    //Print19(5);
    // cout << "\n";
    // cout << "*********************1************************* ";
    // cout << "\n";
    // Print1(n);
    // cout << "\n";
    // cout << "*********************2************************* ";
    // cout << "\n";
    //Print2(n);
    // cout << "\n";
    // cout << "**********************3************************ ";
    // cout << "\n";
    // Print3(n);
    // cout << "\n";
    // cout << "**********************4************************ ";
    // cout << "\n";
    // Print4(n);
    // cout << "\n";
    // cout << "**********************5*********************** ";
    // cout << "\n";
    // Print5(n);
    //cout << "\n";
    // cout << "**********************6*********************** ";
    // cout << "\n";
    // Print6(n);
    // cout << "\n";
    // cout << "***********************7********************* ";
    // cout << "\n";
    // Print7(n);
    // cout << "\n";
    // cout << "**********************8********************** ";
    // cout << "\n";
    // Print8(n);
    // cout << "\n";
    // cout << "*********************9*********************** ";
    // cout << "\n";
    // Print9(n);
    // cout << "\n";
    // cout << "*********************10*********************** ";
    // cout << "\n";
    // Print10(n); 
    // Print11(n);
    //Print12(n);
    //Print13(n);
    //Print14(n);
    //Print15(n);
    //Print16(n);
    //Print17(n);
    //Print18(n);
    


    return 0;
}
