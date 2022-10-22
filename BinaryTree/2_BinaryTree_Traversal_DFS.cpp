#include <iostream>
using namespace std;




struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        right=left=nullptr;

    }
    
};
// DFS Technique
void InorderTraversal(struct Node* root){  // LrR 
   if(root==nullptr){
        return;
    }
   
    InorderTraversal(root->left);
    cout << root->data<< " ";
    InorderTraversal(root->right);
}

void PreOrderTraversal(struct Node* root){  // rLR
    if(root==nullptr){
        return;
    }
    cout << root->data<< " ";
    PreOrderTraversal(root->left);
    PreOrderTraversal(root->right);

}


void PostorderTraversal(struct Node* root){  // LRr
      if(root==nullptr){
        return;
    }
   
    PostorderTraversal(root->left);
    PostorderTraversal(root->right);
     cout << root->data<< " ";
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

    InorderTraversal(root);
    cout << endl;
    PreOrderTraversal(root);
    cout << endl;
    PostorderTraversal(root);
    cout << endl;

    return 0;

}
