#include <iostream>
#include <vector>

using namespace std;


vector<int> Solve(vector<int> &nums){
    int n=nums.size();
    int pre=0, cur=0;
    while(cur < n){
        if(nums[pre]==nums[cur]){
            ++cur;
        }else{
            nums[++pre]=nums[cur++];
        }
        
    }
    nums.resize(pre+1);
    return nums;
    
}
int main(){
    vector<int> vec{0,0,1,1,1,2,2,3,3,4};
    vector<int> ret=Solve(vec);
    for(auto num:ret){
        cout << num << " ";
    }
    return 0;
}

/**
 * @brief 
 *      int pre = 0, cur = 0, n = nums.size();
        while (cur < n) {
            if (nums[pre] == nums[cur]) ++cur;
            else nums[++pre] = nums[cur++];
        }
        return nums.empty() ? 0 : (pre + 1);
    }
 */