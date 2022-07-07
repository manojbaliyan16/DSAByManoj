//
// Created by Manoj Kumar on 07/07/22.
//
#include <iostream>
#include <string>
#include <vector>

using namespace std;



vector<int> FindAnagrams(string s, string p){
    // s: main string
    // P: pattern needs to be search in s
    if (s.empty()) return {};
    vector<int> res, cnt(128, 0);
    int ns = s.size(), np = p.size(), i = 0;
    for (char c : p) ++cnt[c];
    while(i<ns){
        bool success = true;
        vector<int> tmp = cnt;
        for (int j = i; j < i + np; ++j) {
            if (--tmp[s[j]] < 0) {
                success = false;
                break;
            }
        }
        if (success) {
            res.push_back(i);
        }
           ++i;
    }
    cout << " length of the res  " << res.size() << endl;
    return res;
}


int main(){
    string s("cbaebabacd");
    string p("abc");
    vector<int> ans= FindAnagrams(s,p);
    for(auto elem:ans){
        cout << elem << " ";
    }
    return 0;

}