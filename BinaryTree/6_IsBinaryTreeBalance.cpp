/**
 * @file 6_IsBinaryTreeBalance.cpp
 * @author Manoj]
 * @brief 
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*
    lh-rh<=1
*/

#include <iostream>
#include <vector>
#include <iomanip>
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
    int lh=maxDepth(root->left);
    int rh=maxDepth(root->right);
    if(lh==-1 || rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1){
        return -1;
    }
    return max(lh,rh)+1;
}

bool IsBinaryTreeBalanced(Node* root){
    if(maxDepth(root)==-1){
        return false;
    }
    else{
        return true;
    }
}



//TC O(n) recursively Traversal
//SC O(n) Auxiliary Space
int main(){
     struct Node* root= new Node(1);
    root->left= new Node(2);
    root->left->left= new Node(4);
   /*  root->right= new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->left->right->left=new Node(8);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    root->right->right->left= new Node(9);
    root->right->right->right= new Node(10);
    root->right->right->right->right= new Node(11);
    root->right->right->right->right->right=new Node(12); */
    cout << std::boolalpha;   
    cout << IsBinaryTreeBalanced(root) << endl;
    return 0;
}