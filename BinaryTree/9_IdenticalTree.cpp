/**
 * @file 9_IdenticalTree.cpp
 * @author Manoj
 * @brief 
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/* We can find the 2 or more Trees are Identocal or not By doing any one of the traversal among all the trees */


#include <iostream>
using namespace std;

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

// TC & SC =O(n)

bool IsIdentical(TreeNode* n1, TreeNode* n2){
    if(n1==nullptr || n2==nullptr){
        return(n1==n2);
    }
    return (n1->data==n2->data) 
           && IsIdentical(n1->left, n2->left);
           && IsIdentical(n1->right, n2->right );
}