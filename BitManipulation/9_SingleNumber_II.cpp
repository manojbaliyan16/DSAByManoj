//
// Created by Manoj Kumar on 12/06/22.
//Given an array of integers, every element appears thrice except for one, which occurs once.

//
#include <iostream>
#include <vector>
using namespace std;
// 1. count the number set bit at every position store them into an intermediate array of int size
// 2. if the last bit is i%3 ==0 then put the 0 in the return result else 1 on the same location
// T(n)=32(n)
int solve(vector<int> &A){
/*
int count[32]={0};
int ret=0;
int n= A.size();
for(int i=0;i<32;++i)
{
    for(int j=0;j<n;++j)
    {
        if(A[j >> i] & 1){
            count[i]++;
        }
    }
    if(count[i]%3==0){
        ret |=(0<<i);
    }
    else{
        ret|=(1<<i);
    }
}
return ret;*/
    int n = A.size();
    int count[32] = {0};
    int result = 0;
    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < n; j++) {
            if ((A[j] >> i) & 1) {
                count[i]++;
            }
        }
        if (count[i]%3==0)
        {
            result |= (0<<i);
        }
        else if(count[i]%3==1)
        {
            result |= (1<<i);
        }
        // result = result | ((count[i] % 3) << i);
    }
    return result;
}

int main(){
    vector<int> vec{890, 992, 172, 479, 973, 901, 417, 215, 901, 283, 788, 102, 726, 609, 379, 587, 630, 283, 10, 707, 203, 417, 382, 601, 713, 290, 489,
                    374, 203, 680, 108, 463, 290, 290, 382, 886, 584, 406, 809, 601, 176, 11, 554, 801, 166, 303, 308, 319, 172, 619, 400, 885, 203, 463,
                    303, 303, 885, 308, 460, 283, 406, 64, 584, 973, 572, 194, 383, 630, 395, 901, 992, 973, 938, 609, 938, 382, 169, 707, 680, 965, 726,
                    726, 890, 383, 172, 102, 10, 308, 10, 102, 587, 809, 460, 379, 713, 890, 463, 108, 108, 811, 176, 169, 313, 886, 400, 319, 22, 885, 572,
                    64, 120, 619, 313, 3, 460, 713, 811, 965, 479, 3, 247, 886, 120, 707, 120, 176, 374, 609, 395, 811, 406, 809, 801, 554, 3, 194, 11, 587,
                    169, 215, 313, 319, 554, 379, 788, 194, 630, 601, 965, 417, 788, 479, 64, 22, 22, 489, 166, 938, 66, 801, 374, 66, 619, 489, 215, 584,
                    383, 66, 680, 395, 400, 166, 572, 11, 992};


    cout << solve(vec) << endl;
    return 0;
}
