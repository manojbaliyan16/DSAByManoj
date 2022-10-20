#include <iostream>
using namespace std;



// .Print linearly 1 to N

void Print(int count, int n){
    if(count > n){
        return;
    }
    cout << count<< endl;
    Print(count+1,n);

}

int main(){
    int n;
    cin >> n;

    Print(1,n);
    return 0;
}