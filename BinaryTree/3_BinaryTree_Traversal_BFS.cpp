#include <iostream>
#include <queue>
using namespace std;

//BFS or Level Traversal  
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
 
 // BFS Traversal
 vector<vector<int> > levelTraversal(Node* root){
   
    if(root==nullptr){
        return {};
    }
    vector<vector<int> > ret;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
         vector<int> level;
        for(int i=0;i<size;++i){

            Node* node=q.front();
            q.pop();
             level.push_back(node->data);
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);
           
        }
        ret.push_back(level);
    }
    return ret;
 }
int main(){
    struct Node* root= new Node(3);
    root->left= new Node(9);
   // root->left->left=new Node(4);
   // root->left->right=new Node(20);
    root->right= new Node(20);
    root->right->left= new Node(15);
    root->right->right= new Node(7);
   vector<vector<int>> ans= levelTraversal(root);
    for(auto rows:ans){
        for(auto elem:rows){
            cout << elem << " ";
       }
    }
    cout << endl;
}