//Print numbers from 1 to N without the help of loops.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*******************PrintNumbers 1 to N  recursively ***************************************************/
void PrintNum(int n){
    if(n==0){
        return;
    }
   
       
    PrintNum(n-1); // Print(3)-->Print(2)-->Print(1)-->Print(0)--
     cout << n << endl;
     
   
    
    
}

/*******************PrintNumbers string recursively  ***************************************************/
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

/*******************PrintNumbers n to 1 recursively ***************************************************/
void PrintNto1(int n){
    if (n==0)
    {
        return;
    }
    cout << n << endl;
    PrintNto1(n-1);
    
}
/**********************************Sum of N number **********************************************/
// BruteForce using for loop from 1 to n 
// TC = O(n)
// SC = O(1)
void SumOfNumbers_1(int n){
    int sum=0;
    for(int i=n;i>=1;--i){
    sum+=i;
    }
    cout << sum << endl;
}
// Using sum of n number formula
// TC=O(1);
// SC=O(1);
void SumOfNumbers_2(int n){
    
    cout << n*(n+1)/2 << endl; 

}

// Using recursion

void SumOfNumbers_3(int n){
    static int sum=0;
    if(n==0){
        cout << sum << endl;
        return;
    }
    sum+=n;
   // cout << sum << endl;
    SumOfNumbers_3(n-1);
    
}

/***********************Factorial Of N Numbers ************************/
int Factorial(int n){
    long fact=1;
    if(n==1){
        return fact;
    }
    return n*Factorial(n-1);
}
/*******************************************reverse an array ******************************************/
// BruteForce Method 1
void DisplayReverseArray(vector<int> &vec){
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;
}
// Iterative Method :
// Tc=O(n)
// Sc=O(n);
void reverseArray_1(vector<int> vec){
    int size=vec.size()-1;
    vector<int> ret;
    cout << "reverseArray_1 " << endl;
    for(int i=size;i>=0;i--){
        ret.push_back(vec[i]);
    }
    DisplayReverseArray(ret);

}
// Two Pointer Method / Optimal Solution 
// TC=O(n/2)
// SC=O(1)
void reverseArray_2(vector<int> &vec){
    int start=0;
    int end=vec.size()-1;
    cout << "reverseArray_2 " << endl;
    while(start<end){
        swap(vec[start], vec[end]);
        start+=1;
        end-=1;
    }
    DisplayReverseArray(vec);
}
// Recursive Method 

void reverseArray_3(vector<int> &vec){
   static int start=0;
    static int end=vec.size()-1;
    // Base Condition
    if(start >=end){
         cout << "reverseArray_3 " << endl;
         //start=0; end=vec.size()-1;
        DisplayReverseArray(vec);
        return;
    }
    swap(vec[start], vec[end]);
    start++;
    end--;
    reverseArray_3(vec);
   
}
int main(int argc, char const *argv[])
{
    vector<int> vec{1,2,3,4,5};
    vector<int> vec_3{2,4,6,8,10};
    reverseArray_1(vec);
    reverseArray_2(vec);
    reverseArray_3(vec_3);
   // cout << Factorial(7) << endl;
    //SumOfNumbers_1(5);
    //cout << endl;
    //SumOfNumbers_2(5);
    //cout << endl;
    //SumOfNumbers_3(5);
    cout << endl;
    //PrintNto1(5);
    cout << endl;
   // printDSA(5);
    cout << endl;
    //PrintNum(4);
    return 0;
}
