#include <iostream>


using namespace std;


/*
 if a class is defined with a ctor in that case that class will not generate default ctor 
 */

class A{
    public:
    A(int a){}
    A()=default;
};

int main(){
    A a; // cCompiler complain that no matchin ctor for a to solve this one 
    return 0;
}