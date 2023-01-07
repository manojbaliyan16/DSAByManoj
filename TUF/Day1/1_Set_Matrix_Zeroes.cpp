/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.
*/
#include <iostream>
#include <vector>
using namespace std;

// BruteForceMethod
void Solve(vector<vector<int> >& matrix){
    int Cols=matrix[0].size();
    int Rows=matrix.size();
    cout << "Rows " <<  Rows <<" " << Cols << endl;
    for(int i=0;i<Rows;++i){
        for(int j=0;j<Cols;++j){
            if(matrix[i][j]==0){
                // make all rows element = -1
                for(int k=0;k<Rows;++k ){
                   // if(k!=i)
                    matrix[k][j]=-1;
                }
                // make all columns element =-1
                for(int t=0;t<=Cols;++t ){
                    matrix[i][t]=-1;
                }
            }

        }
    }
    for(int i=0;i<Rows;++i){
        for(int j=0;j<Cols;++j){
            if(matrix[i][j]==-1){
             matrix[i][j]=0;
            }
        
        }
    }
}
void Display(vector<vector<int> >& matrix){
    int Cols=matrix[0].size();
    int Rows=matrix.size();
   for(int i=0;i<Rows;++i){
        for(int j=0;j<Cols;++j){
           cout << matrix[i][j] << " ";
        
        }
        cout << "\n";
    } 
}
int main(){
    
    vector<vector<int> > matrix{
        {0,0,0,0},
        {3,4,5,2},
        {1,3,1,5}
        };
        Solve(matrix);
        Display(matrix);
        return 0;
}