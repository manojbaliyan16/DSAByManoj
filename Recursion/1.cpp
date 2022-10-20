#include <iostream>

using namespace std;
//int count =0;
void func(int num){
    if(num==4){
        return;
    }
    
    num++;
    func(num);
    cout << num << endl;

}

int main(){
    int num=0;
    func(num);
    return 0;
}