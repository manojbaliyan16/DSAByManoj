//
// Created by Manoj Kumar on 24/06/22.
//
/*
 * Given an integer array A of size N and an integer B, you have to print the same array after rotating it B times towards the right.
 * */
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        int B;
        cin >> B;
        // B supposed to be rotate if more than size of the array
        B = B % N;
        int ans[N];
        for (int i = 0; i < N; i++) {
            ans[i] = A[(i - B + N) % N];
        }
        for (int i = 0; i < N; i++) {
            cout << ans[i] << " ";
        }

    }
   return 0;

}