#include <bits/stdc++.h>
using namespace std;
int main(){
    // input all the numbers 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    // Precomputation 
    int hashArr[10]={0};
    for(int i=0;i<n;++i){
        hashArr[arr[i]]+=1;
    }
    // query 
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        // Fetching
        cout << "The given number frequency is " << endl;
        cout << hashArr[num] << endl;
    }
}