#include <bits/stdc++.h>
using namespace std;

int main(){
    // input values
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    // Precomputation 
    map<int, int> mymap;
    for(int i=0;i<n;i++){
        mymap[arr[i]]++; // this can be done in upper for loop as well
    }
    // Query
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        // Fetch the value;
        cout << "Frequency of the given number is" << endl;
        cout << mymap[num] << endl;
    }
}