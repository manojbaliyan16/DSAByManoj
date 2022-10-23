#include <iostream>

using namespace std;

// Return the node whose value is n


struct TreeNode{
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
// TC=O(n)
// SC = O(1);


TreeNode* SearchBST(TreeNode* root, int val){
    while(root!=nullptr && root->data!=val){
        root=val < root->data ? root->left : root->right;
    }
    return root;
}
 
