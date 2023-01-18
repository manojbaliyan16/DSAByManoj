#include<iostream>

using namespace std;


string armstrongNumber(int n){
        // code here
        long res=0;
        int num=n;
        while(n!=0){
            int digit=n%10;
            res+=digit*digit*digit;
            n=n/10;
        }
        if(num==res) return "Yes";
        else return "No";
    }
int main(int argc, char const *argv[])
{
    int n=371;
    cout << "Is given number ArmStrong Number " << armstrongNumber(n) << endl;

    return 0;
}
    