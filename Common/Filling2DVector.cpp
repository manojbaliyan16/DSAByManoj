#include <iostream>
#include <vector>

using namespace std;

int main(){
    // 1. using fill-constructor to initialize a 2D vector
    int default_value=1;
    vector<vector<int> > matrix(3, vector<int>(4, default_value));
    cout << "rows " << matrix.size() << endl;
    cout << "col " << matrix[0].size() << endl;
    //  Split Aabove initializaation in 2 parts 
    cout << "using fill-constructor to initialize a 2D vector " << endl;
    
    vector<int> v1(4,default_value);
    vector<vector<int> >mat(3,v1);

    for(auto row:mat){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << " \n" ;
    }

    // 2. Using resize() 
    const int M=3;
    const int N=4;
    // initiate a vector of M objects of type vector<int> 
    // and resize each object of size N with the given default value 

 cout << "using resize()  " << endl;
    vector<vector<int> > mat2(M);
    for(auto i=0;i<M;i++){
        mat2[i].resize(N, default_value);
    }

 for(auto row:mat2){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << " \n" ;
    }
    // 3. using push_back

 cout << "using push_back " << endl;
    vector<vector<int> > mat3;
    vector<int> v;
     for (int j = 0; j < N; j++) {
            v.push_back(default_value);
        }
    for(int i=0;i<M;i++){

        mat3.push_back(v);
    }

     for(auto row:mat3){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << " \n" ;
    }
    // 4. Using initialize_list
     cout << "using initialize_list " << endl;
    vector<vector<int> > mat4{
        {1,1,1,1},
        {1,1,1,1},
        {1,1,1,1},
    };

 for(auto row:mat4){
        for(auto elem:row){
            cout << elem << " ";
        }
        cout << " \n" ;
    }

    return 0;

}
