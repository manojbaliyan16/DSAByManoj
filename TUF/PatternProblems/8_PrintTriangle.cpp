#include <iostream>
using namespace std;


/**
Print Below pattern
*********
 *******
  *****
   ***
    *

 What we can see here
 1. Space in the beginning of the 2ndline onwards and a space at the end also
 2. total number of rows are input
 3. number of * in first row are 2*rows-1
*/


void PrintTriangle(int n){
   // rows
   for (size_t i = 0; i < n; i++)
   {
      // space in the beginning 
      for (size_t j = 0; j <= i; j++)
      {
         cout << " ";   
      }
      // print *
      for (size_t j = 0; j < 2*n -(2*i+1); j++)
      {
         cout << "*";
      }

      // space in the end 
      for (size_t j = 0; j <= i; j++)
      {
         cout << " ";   
      }
      cout << "\n";
  
   }
       
}

 int main(int argc, const char** argv) {  
   PrintTriangle(5);
    return 0;
}


