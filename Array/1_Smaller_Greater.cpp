#include <iostream>
#include <vector>

using namespace std;
// 1. Smaller and Greater

int func(vector<int> &vec){
    int count=0;
    int smallest=*min_element(vec.begin(), vec.end());
    int greatest=*max_element(vec.begin(), vec.end());
    for(auto  num:vec){
        if(num > smallest && num < greatest){
            ++count;
        }

    }
    return count;
}
int main() {
    vector<int> v{5,6,1,2,3,9};
    int x=func(v);
    cout << x << endl;
    return 0;
}
