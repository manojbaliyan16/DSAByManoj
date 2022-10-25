/**
 * @file 6_KthSmallestAndLargestElement.cpp
 * @author Manoj 
 * @brief 
 * @version 0.1
 * @date 2022-10-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(){
        val=0;
        left=right=nullptr;
    }
    TreeNode(int data){
        val=data;
        left=right=nullptr;
    }
    TreeNode(int data, TreeNode* leftNode, TreeNode* rightNode){
        val=data;
        left=leftNode;
        right=rightNode;
    }
};

TreeNode* Insert(TreeNode* root, int key){
    if(root==nullptr){
        return new TreeNode(key);
    }
    TreeNode* cur=root;
    while(true){
        if(cur->val < key){
            if(cur->right!=nullptr){
                cur=cur->right;
            }else{
                cur->right=new TreeNode(key);
                break;
            }
        }else{
            if(cur->left!=nullptr) {
                cur=cur->left;
            }else{
                cur->left=new TreeNode(key);
                break;
            }
        }
    }
    return root;
}

void InorderDisplay(TreeNode* root){
    if(root==nullptr){
        return;
    }
    InorderDisplay(root->left);
    cout << root->val << " " ;
    InorderDisplay(root->right);
    
}

TreeNode* KthSmallest(TreeNode* root, int& k){

    if(root==nullptr){
        return root;
    }
    TreeNode* left=KthSmallest(root->left, k);
    if(left!=nullptr){
        return left;
    }
    k--;
    if(k==0){
        return root;
    }
    return KthSmallest(root->right, k);
}

TreeNode* KthLargest(TreeNode* root, int& k){

    if(root==nullptr){
        return root;
    }
    TreeNode* right=KthLargest(root->right, k);
    if(right!=nullptr){
        return right;
    }
    k--;
    if(k==0){
        return root;
    }
    return KthLargest(root->left, k);
}


int main(){
    TreeNode* root=nullptr;
    root=Insert(root, 9);
    root=Insert(root, 8);
    root=Insert(root, 5);
    root=Insert(root, 7);
    root=Insert(root, 6);
    root=Insert(root, 3);
    root=Insert(root, 4);
    root=Insert(root, 2);
    root=Insert(root, 1);
    root=Insert(root, 12);
    root=Insert(root, 10);
    root=Insert(root, 11);
    root=Insert(root, 13);
    InorderDisplay(root);
    int element=0;
    int pos;

    cout << "\nEnter the pos " << endl;
    cin >> pos;
    int k=pos;
    int temp=k;
    TreeNode* samllestNode=KthSmallest(root, pos);
    TreeNode* largestNode=KthLargest(root, k);
    cout << temp <<"th smallest element is " << samllestNode->val << endl;
    cout << temp <<"th largest element is " << largestNode->val << endl;
    cout << endl;
    return 0;

}