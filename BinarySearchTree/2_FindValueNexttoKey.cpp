 #include <iostream>

using namespace std;
 // Find the Ceil in The BST
 // Ceil means find the value either equivalent to key, If it doesn't exist find the next greater value from the key  
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
int FindCeil(TreeNode* root, int key){
    int ciel=INT_MIN;
    while(root){
        if(root->data==key){
            ceil=root->data;
            return ciel;
        }
        if(key > root->data){
            root=root->right;
        }else{
            ciel=root->data;
            root=root->left;
        }
    }
}