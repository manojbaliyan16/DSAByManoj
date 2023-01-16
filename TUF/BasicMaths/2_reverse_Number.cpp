/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

*/
/*
    as per question value can exist between int range 
   -2,147,483,648 to 2,147,483,647 so after reverse number should be in arange -2,147,483,648 <= num >=2,147,483,647 if it outside this return 0
   AS INT_MAX=2,147,483,647
   INT_MAX/10=2,147,483,64
   * Before multiplying by 10 we can check if ret > 2,147,483,64 or ret < - 2,147,483,64
*/

#include <iostream>
#include <climits>


using namespace std;
// Solution 1 we are taking result as long , we want it stick with int only then sol 2 
int reverse_1(int x) {
    long res=0;
        while(x!=0){
            res=res*10+x%10;
            x=x/10;
        }
        return (res > INT_MAX || res < INT_MIN) ? 0:res;
}
// Sol 2 
int reverse_2(int x){
    int res=0;
    while(x!=0){
       if(abs(res) > INT_MAX/10) return 0;
        res=10*res+x%10;
        x/=10;
    }
    return (res > INT_MAX || res<INT_MIN) ? 0 : res;
}

int main(){
    
    cout << reverse_1(964632435) << endl;
    cout << reverse_2(964632435) << endl;
    return 0;
}