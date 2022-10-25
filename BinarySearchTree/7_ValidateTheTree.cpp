/**
 * @file 7_ValidateTheTree.cpp
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

bool IsValidBST(TreeNode* root, int min, int max){
    if(root==nullptr) {
        return true;
    }
    if(root->val >=max || root->val <=min){
        return false;
    }
    return IsValidBST(root->left, min, root->val) && IsValidBST(root->right, root->val,max);
}
// TC=O(n)
// SC=O(n)  
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
    int minVal=INT_MIN;
    int maxVal=INT_MAX;
    cout << boolalpha << endl;
    cout << IsValidBST(root, minVal, maxVal)<< endl;
    return 0;
}