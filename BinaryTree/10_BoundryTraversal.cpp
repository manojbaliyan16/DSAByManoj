/**
 * @file 10_BoundryTraversal.cpp
 * @author Manoj
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/*
    Step 1: LEFT BOUNDRY TRAVERSAL AntiClock Wise Boundry Traversal : Put all the elements into array expect leaf node  
            If left node is null then go into right
    Step 2: Put the leafnode in to array for this 
            Traverse the tree and put all the leaf only nodes either in stack or vector 
            once all leaf nodes in stack or vector transfer them into 
    step 3: Right Boundry traversal in reverse if right node is null then only go to left and put all the nodes in to main array excluding leaf nodes 

*/

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(): data(0), left(nullptr), right(nullptr){}
    TreeNode(int val){
        data=val;
        right=left=nullptr;

    }
    TreeNode(int x, TreeNode* left, TreeNode* right):data(x), left(left), right(right){}
    
};

bool Isleaf(TreeNode* root){
    return !root->left && !root->right;
}

void addLeftBoundry(TreeNode* root, vector<int>& res){
    TreeNode* cur=root->left;
    while(cur){
        if(!Isleaf(cur)){
            res.push_back(cur->data);
        }
        if(cur->left){
            cur=cur->left;
        }else{
            cur=cur->right;
        }
    }
}
void AddRightBoundry(TreeNode* root, vector<int> &res){
    TreeNode* cur=root->right;
    vector<int> temp;
    while(cur){
        if(!Isleaf(cur)){
            temp.push_back(cur->data);
        }
        if(cur->right){
            cur=cur->right;
        }else{
            cur =cur->left;
        }
    }
    // right boundry in reverse scan
   res(temp.rbegin(), temp.rend());
}

void addLeaves(TreeNode* root, vector<int>& res){
    if(Isleaf(root)){
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeaves(root->left, res);
    if(root->right) addLeaves(root->right, res);
}
vector<int> PrintBoundry(TreeNode* root){
    vector<int> res;
    if(!root){
        return res;
    }
    addLeftBoundry(root, res);
    //add leaves
    addLeaves(root, res);
    AddRightBoundry(root, res);
    return res;
}
int main(){
    struct Treenode* root = new Treenode(1);
  root -> left = new Treenode(2);
  root -> left -> left = new Treenode(3);
  root -> left -> left -> right = new Treenode(4);
  root -> left -> left -> right -> left = new Treenode(5);
  root -> left -> left -> right -> right = new Treenode(6);
  root -> right = new Treenode(7);
  root -> right -> right = new Treenode(8);
  root -> right -> right -> left = new Treenode(9);
  root -> right -> right -> left -> left = new Treenode(10);
  root -> right -> right -> left -> right = new Treenode(11);

  vector < int > boundaryTraversal;
  boundaryTraversal = PrintBoundry(root);

  cout << "The Boundary Traversal is : ";
  for (int i = 0; i < boundaryTraversal.size(); i++) {
    cout << boundaryTraversal[i] << " ";
  }
  return 0;

}