#include <bits/stdc++.h>

using namespace std;


int main(){
    string str="abcdabefc";
    // as letters are small lettres only take hashArray size as 26
    // Precalculation 

    int hashArr[26]={0};

    for(int i=0;i<str.length();++i){
        hashArr[str[i]-'a']++; //str[i]-'a' will be autocasted to index which comes from substraction of 2 ASCII values

    }

    // Query
    int q;
    cin >> q;
    while(q--){
        char ch;
        cin >> ch;
        // Fetching
        cout << "Frequency of the given char is " << endl;
        cout << hashArr[ch-'a']<<endl;
 
    
    }
    return 0;
}