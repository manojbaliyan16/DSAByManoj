// Print n to 1

#include <iostream>
using namespace std;

 /* void Print(int count, int n){
    if(count > n){
        return;
    }
    Print(count+1,n);
    cout << count<< endl;
    

} 
int main(){
    int n;
    cin >> n;

    Print(1,n);
    return 0;
}*/ 
void Print(int count, int n){
    if(count < n){ 
        return;
    }
    cout << count<< endl;
    Print(count-1,n);
    
    

}

int main(){
    int n;
    cin >> n;

    Print(50,n);
    return 0;
}

