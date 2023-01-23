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
// Check If String Palindrom  // Iteratrive Optimal 
bool IsStringPalindrom(string str){
    int len=str.length();
    int start=0;
    int end=len-1;

    // base condition
 /*    if(start>=end){
        start=0;
        end=len-1;
        return;
    } */
    while(start<end){
        if(str[start]==str[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
        
    }
    return true;
}
// Recursive : IsPalindrom 
// Time complexity depends upon the total number of recursive call and in this case total number of recursive call  will be n/2 
// because every once start will reach to end pointer that time i function will return 
// So total time complexity will be O(n/2) or O(n)
// while with this recursion there will O(n) space complexity also which is due to stack call

bool IsStringPalindrom_Recursive(string str){
    int len=str.length();
    static int start=0;
    static int end=len-1;

    // base condition
    if(start>=end){

        return true;
    } 
    if(str[start]!=str[end]){
        return false;
    }
    start++;
    end--;
   return IsStringPalindrom(str);
   
}
/***********************************Fibnaaci Number **************************************************/
// Time complexity will be O(2^n)
// because it is coming from 1. PrintFib(n-1) and 2. PrintFib(n-2)
// So there is 2 recurive call for each call and it will increase exponentially with the number of inputs
// for example for n=4 function makes 3 calls while N=5 function makes 5 call 
// and obvious due to stack call there will be O(n) space complexity as well 
// There will be more efficient ways 1. iteratrive method and 2. memorizatiom or DP 
// here we will see Iterative mehod

// Recursive 
int PrintFib(int n){
    if(n<=0) return 0;
    if(n==1) return 1;
    return PrintFib(n-1) + PrintFib(n-2);
}
// Iterative Method to Print the Fibnaaci Series 

void PrintFib_Itertive(int n){
    int first=0;
    int second=1;
    int next=0;// initialization
    for (size_t i = 0; i < n; i++)
    {
        if(i<=1){
            next=i;
        }
        else{
            next=first+second;
            first=second;
            second=next;
        }
        cout << next << " ";
    }
    cout << "\n";
    
}

int main(int argc, char const *argv[])
{
    PrintFib_Itertive(5);
    
    /* for(int i=0;i<5;i++)
    cout << PrintFib(i) << " ";
    cout << endl; */
    /* string str{"qmoeeomq"};
    cout << "String str " << str << "is Palindrom " << std::boolalpha  << IsStringPalindrom(str) << endl; */
   /*  vector<int> vec{1,2,3,4,5};
    vector<int> vec_3{2,4,6,8,10};
    reverseArray_1(vec);
    reverseArray_2(vec);
    reverseArray_3(vec_3); */
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
