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


int main(){
    TreeNode* root=nullptr;
    root=Insert(root, 6);
    root=Insert(root, 3);
    root=Insert(root, 2);
    root=Insert(root, 4);
    root=Insert(root, 7);
    root=Insert(root, 8);
    InorderDisplay(root);
    cout << endl;
    return 0;

}