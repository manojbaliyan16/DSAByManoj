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
int maxDepth(Node* root){
    if(root==nullptr){
        return 0;
    }
    int l=maxDepth(root->left);
    int r=maxDepth(root->right);
    return 1+max(l,r);
   
}
// T(c) -->O(n) because we have to go all number of nodes 
// S()--> O(n) -->Auxiliary Space 

int main(){
    struct Node* root= new Node(1);
    root->left= new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right= new Node(3);
    root->right->left= new Node(6);
    root->right->right= new Node(7);

    cout << maxDepth(root) << endl;


    
}