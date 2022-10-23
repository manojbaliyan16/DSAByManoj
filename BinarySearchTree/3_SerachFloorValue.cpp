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


int FloorValue(TreeNode* root, int Key){
    int floor=INT_MIN;
    while(root){
        if(key == root->data){
            floor=root->data;
            return floor;
        }
        if(key > root->data){
            floor=root->data;
            root=root->right;
        }else{
            root=root->left;
        }
    }
    return floor;
}