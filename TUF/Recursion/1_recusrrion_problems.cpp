//Print numbers from 1 to N without the help of loops.
#include <iostream>

using namespace std;
void PrintNum(int n){
    if(n==0){
        return;
    }
   
       
    PrintNum(n-1); // Print(3)-->Print(2)-->Print(1)-->Print(0)--
     cout << n << endl;
     
   
    
    
}

// Print name N times using recursion
// Space Complexity O(n) due to stack call 
// Time Complexity O(n)
 void printDSA(int N) {
        // Code here
        if(N==0) {
             return;
        }
        printDSA(N-1);
        cout<<"DSA"<<" ";
    } 

int main(int argc, char const *argv[])
{
    printDSA(5);
    cout << endl;
    //PrintNum(4);
    return 0;
}
