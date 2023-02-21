// Here instead of small letter we can consider all types of character 
// in that case hash array size will be 256 

#include<bits/stdc++.h>

using namespace std;


int main(){

    string str{"anbcdebcafg"};
// precomputation
  int hashArray[256]={0};
  for(int i=0;i<str.length();++i){
    hashArray[str[i]]++; // in that case to find out the index in respect to the char we don't have to substract 'a' from any char because now every char will be at its fixed position out of 256

    }  
// query
int q;
cin >> q;
while(q--){
    char ch;
    cin >> ch;
    cout << "frequencey of given char is " << hashArray[ch]<< endl;

    }
return 0;
}