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
 vector<int> levelTraversal(Node* root){
   // vector<vector<int> > ret;
    vector<int> level;
    if(root==nullptr){
        return level;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        
        for(int i=0;i<size;++i){
            Node* node=q.front();
            q.pop();
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);
            level.push_back(node->data);
        }
       // ret.push_back(level);
    }
    return level;
 }
int main(){
    struct Node* root= new Node(1);
    root->left= new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right= new Node(3);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    vector<int> ans= levelTraversal(root);
    for(auto rows:ans){
        //for(auto elem:rows){
            cout << rows << " ";
       // }
    }
    cout << endl;
}