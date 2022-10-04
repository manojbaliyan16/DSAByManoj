
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<vector<int> > vec{{1,0,1},{0,1},{2,0,2}};
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();++j){
            cout << vec[i][j]<< " ";
        }
        cout << endl;
    } 

cout << " ****** 2nd case ****************" << endl;
    int num_col=3;
    int num_row=4;
    // initializing a single row 
    vector<int> row_vector(num_col,0);// A vector with length num_col and default value = 0
    // initializing the 2-D vector 
    vector<vector<int> > v(num_row, row_vector); // A 2D vector with every value with 2D vector as vector_row
    for(auto row:v){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << "***********case 3 ***** Mix above 2 step Initialization ********* " << endl;
    vector<vector<int> > vect(num_row,vector<int>(num_col,0));
    for(auto row:vect){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << "Default Ctor of vector class " << endl;
    //std::vector::vector(count, value) 
    constexpr int ROW_COUNT=4;
    constexpr int COL_COUNT=3;


    vector<vector<int> > testVector(ROW_COUNT, vector<int>(COL_COUNT));// defaulst to Zero Initial value
     for(auto row:testVector){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << " ************** " << endl;
vector<vector<int> > testVector2(ROW_COUNT, vector<int>(COL_COUNT,4));
  for(auto row:testVector2){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}