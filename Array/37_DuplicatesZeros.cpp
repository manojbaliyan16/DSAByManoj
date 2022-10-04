#include <iostream>
#include <vector>
using namespace std;

/* void Solve(vector<int> &vec){
    int n=vec.size();
    for(int i=0;i<n;i++){
        if(vec[i]==0){
            for(int j=n-1;j>=i+1;j--){
                vec[j]=vec[j-1];
            }
            vec[i+1]=0;
            i++;
        }
    }
    for(auto num:vec){
        cout << num << " ";
    }
} */

void Solve(vector<int> &arr){
        int n = arr.size();
        vector<int> res;
        for (int i = 0; i < n && res.size() < n; ++i) {
            res.push_back(arr[i]);
            if (arr[i] == 0 && res.size() < n) res.push_back(0);
        }
        arr = res;
    for(auto num:arr){
        cout << num << " ";
    }
}

int main(){
    vector<int> vec{8,4,5,0,0,0,0,7};//{1,0,2,3,0,4,5,0};
    Solve(vec);
    return 0;
}