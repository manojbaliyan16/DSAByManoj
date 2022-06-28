//
// Created by Manoj Kumar on 28/06/22.
//
/*
 * Search in a row wise and column wise sorted matrix
 *
 * */
// Worst Case complexity will be O(n+m) because in wosrt case we need to go every row and from there at every col
#include <iostream>
#include <vector>
using namespace std;

int Solve(vector<vector<int> > &vec, int key){
    int row=vec.size()-1; // Total Number of Rows
    int col=vec[0].size()-1; // Number of columns
    int i=0; // set i at first row
    int j=col;// set J to the last col
    while( (i >=0 && i<=row) && (j>=0 && j<=col)){
        if(vec[i][j]==key && vec[i][j-1]==key){
            j--;
        }else if(vec[i][j]==key && vec[i][j-1]!=key){
            cout << "i = " << i << " j= " << j << endl;
            return ((i+1)*1009+(j+1));
        } else if(vec[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
    return -1;

}
int main(){
    vector<vector<int> > vec{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int key=10;
    int ret = Solve(vec,key);
    if(ret!=-1){
        cout << " element found " << ret << endl;
    }else{
        cout << "element not found " << endl;
    }
    return 0;
}