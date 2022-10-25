/**
 * @file 8_LCA.cpp
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

TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root==nullptr) {
        return nullptr;
    }
    int curr= root->val;
    if(curr < p->val && curr < q->val){
        return LCA(root->right, p, q);
    }
    if(curr > p->val && curr > q->val){
        return LCA(root->left, p, q);
    }
    return root;
}

// Iterative
/* TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int minVal = min(p->val,q->val),maxVal = max(p->val,q->val);
        TreeNode* dummy=root;
        while(dummy)
        {
            if(dummy->val<minVal)
                dummy = dummy->right;//both values are on right of current node
            else if(dummy->val>maxVal)
                dummy = dummy->left;//both values are on left of current node
            else
                break;//this node is LCA of p and q
        }
        return dummy;
    } */

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return NULL;
        int curr = root->val; 
        if(curr < p->val && curr < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        }
        if(curr > p->val && curr > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        }
        return root;
 }
// TC=O(n)
// SC=O(n)  
int main(){
    TreeNode* root=nullptr;
    root=Insert(root, 10);
    root=Insert(root, 13);
    root=Insert(root, 11);
    root=Insert(root, 15);
    root=Insert(root, 4);
    root=Insert(root, 8);
    TreeNode* root1=Insert(root, 6);
    TreeNode* root2=Insert(root, 9);
    root=Insert(root, 3);
    root=Insert(root, 1);
    root=Insert(root, 2);
    InorderDisplay(root);
    TreeNode* LCANode= LCA(root, root1, root2);
    cout << "\nLCS Node Val is " << LCANode->val << endl;
    TreeNode* LCANode2=lowestCommonAncestor(root, root1, root2);
    cout << "\nLCS Node Val is " << LCANode2->val << endl;
    return 0;
}