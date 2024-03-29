


/*
longest path between two Nodes 
path does not need to pass via root 

*/
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(): data(0), left(nullptr), right(nullptr){}
    Node(int val){
        data=val;
        right=left=nullptr;

    }
    Node(int x, Node* left, Node* right):data(x), left(left), right(right){}
    
};
int maxDepth(Node* root, int&  maxDia){
    if(root==nullptr){
        return 0;
    }
    
    int LeftHeight=maxDepth(root->left, maxDia);
    int RightHeight=maxDepth(root->right, maxDia);
    maxDia=max(maxDia, LeftHeight+RightHeight);
    return 1+max(LeftHeight,RightHeight);
}

int main(){

    struct Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->right->left=new Node(8);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    root->right->right->left= new Node(9);
    root->right->right->right= new Node(10);
    root->right->right->right->right= new Node(11);
    root->right->right->right->right->right=new Node(12);   
    int Diameter=0;
     cout << "Hieght of the tree is  " << maxDepth(root, Diameter) << endl;
     cout << "Diameter of the tree is " << Diameter << endl;

    return 0;
}