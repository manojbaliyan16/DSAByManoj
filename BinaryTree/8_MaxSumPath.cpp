/**
 * @file 8_MaxSumPath.cpp
 * @author Manoj
 * @brief 
 * @version 0.1
 * @date 2022-10-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/* 
 find the Maximum sum over a path in the Binary tree
*/

// Will be solved by Max Depth in TC() and SC = O(n) 

#include <iostream>
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

int MaxSumPath(Node* root, int& maxSum){
    if(root==nullptr){
        return 0;
    }
    int lh= max(0,MaxSumPath(root->left, maxSum));
    int rh=max(0,MaxSumPath(root->right, maxSum));
    maxSum=max(maxSum, lh+rh+root->data);
    return max(lh, rh)+root->data;

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
    root->right->right->right->right= new Node(11);
    root->right->right->right->right->right=new Node(12);   
    int maxSum=INT_MIN;
    int sum=MaxSumPath(root, maxSum);

     cout << "Max Sum over a path in the tree is   " << maxSum << endl;



    return 0;
}