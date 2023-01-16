// Given an integer x, return true if x is a palindrome, and false otherwise. LC-9
#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;


 bool isPalindrome(int x) {
        long res=0;
        int num=x;
        while(x!=0){
           // if(abs(res) > INT_MAX/10) return 0;
            res= 10*res+x%10;
            x/=10;
        }
       if(abs(num)==res) return true;
        return false;
 }

int main(int argc, const char** argv) {
    cout << std::boolalpha << isPalindrome(121) << endl;
     return 0;
 }