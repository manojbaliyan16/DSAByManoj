/*
Reverse the bits of an 32 bit unsigned integer A.

*/
#include <iostream>
#include <vector>
using namespace std;
unsigned int reverse(unsigned int A)
{
    /*
    1. Check all the bits from 1 to 32th 
    operate on a result =0;
        1. If first bit of the number is 1 --> shift left the result  and add 1 
        2. else --> shift left only to the result  
        3. to check the next bit shift right the number 
    */
   uint32_t result=0;
   for(int i=0;i<32;++i)
   {
       if((A&1)==1)
       {
           result = (result<<1) +1;

       }
       else
       {
           result = (result<<1);
       }
       A=(A>>1);
   }
   return result;

}
int main()
{
    uint32_t A=3;
    cout << reverse(A)<<endl;
    return 0;
    
}