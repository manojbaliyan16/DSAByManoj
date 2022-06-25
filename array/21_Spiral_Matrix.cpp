//
// Created by Manoj Kumar on 24/06/22.
//
/*Given a matrix of  m  x  n  elements ( m  rows,  n columns), return all elements of the matrix in spiral order.
 * */
#include <iostream>
#include <vector>
using namespace std;

vector<int> Solve(vector<vector<int>> &myvec){
    vector<int> result;
    int ER= myvec.size()-1;
    int EC= myvec[0].size()-1;
    cout << "ER ==" << ER << " EC == " << EC << endl;
    int SR=0;
    int SC=0;
    while(SR <= ER && SC <= EC)
    {
        for(int col=SC;col<=EC;++col)
            result.push_back(myvec[SR][col]);

        for(int row=SR+1;row<=ER;++row)
        {
            result.push_back(myvec[row][EC]);
        }
        if(SR<ER)
        {
            for(int col=EC-1;col>=SC;--col)
            {
                result.push_back(myvec[ER][col]);
            }
        }
        if(SC<EC)
        {
            for(int row=ER-1;row>SR;--row)
            {
                result.push_back(myvec[row][SC]);
            }
        }
        SR+=1;
        ER-=1;
        SC+=1;
        EC-=1;
    }
    return result;

}

int main(){
    vector<vector<int> > A{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> result= Solve(A);
    for(auto num:result){
        cout << num << " ";
    }
    return 0;
}
