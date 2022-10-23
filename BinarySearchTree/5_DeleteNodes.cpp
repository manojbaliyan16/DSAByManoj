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

TreeNode* findLastRight(TreeNode* root){
    if(root->right==nullptr){
        return root;
    }
    return findLastRight(root->right);
} 

TreeNode* helper(TreeNode* root){
    if(root->left==nullptr){
            return root->right;
    }
    else if(root->right==nullptr){
        return root->left;
    }
    TreeNode* rightChild= root->right;
    TreeNode* lastChild= findLastRight(root->left);
    lastChild->right=rightChild;
    return root->left;
}


// Case 1: delete root node with its 2 children  case
// Case 2: delete the node with no children, just remove the node from the tree
// case 3: delete the node with one child, just remove the node and replace it with its child

TreeNode* DeleteNode(TreeNode* root, int key){
    if(root==nullptr){
        return nullptr;
    }
    
    if(root->val==key){
        return helper(root);
    }
    TreeNode* dummy=root;
    while(root!=nullptr){
        if(root->val > key){
            if(root->left!=nullptr && root->left->val==key){
                root->left=helper(root->left);
                break;
            }else{
                root=root->left;
            }
        }else{
            if(root->right!=nullptr && (root->right->val)==key){
                root->right=helper(root->right);
                break;
            }else{
                root=root->right;
            }
        }
    }
    return dummy;
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
    int key=0;
    cout << "\nEnter the key to be deleted " << endl;
    cin >> key ;
    TreeNode* dummy= DeleteNode(root, key);
    cout << "After Deleting  " << endl;
    cout << "Root is " << dummy->val << endl;
    InorderDisplay(dummy);
    cout << endl;
    return 0;

}