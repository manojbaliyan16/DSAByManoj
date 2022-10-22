#include <iostream>
#include <vector>
using namespace std;
vector<int> Solve(vector<int> &vec){
    int n=vec.size();
    for(int i=0,j=0;i<n;i++){  // i=2 , 5
        if(vec[i]){
            swap(vec[i], vec[j++]); // j=3
        }
    }
    return vec;

}


int main(){
    vector<int> vec{0,1,0,3,1,2}; // 1,0,0,3,1,2-->1,3,0,0,1,2-->1,3,1,0,0,2
    vector<int> ret=Solve(vec);
    for(auto num:ret){
        cout << num << " ";
    }
    return 0;
}