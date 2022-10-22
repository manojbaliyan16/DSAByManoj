#include <iostream>
#include <queue>
#include <vector>

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

int maxDepth(Node* root){
    int depth=0;
    if(root==nullptr){
        return depth;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        depth++;
        for(int i=0;i<size;++i){
            Node* temp=q.front();
            q.pop();
            if(temp->left!=nullptr) q.push(temp->left);
            if(temp->right!=nullptr) q.push(temp->right);
        }
    }
    return depth;
}


int main(){
    struct Node* root= new Node(1);

    root->left= new Node(2);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right= new Node(3);
    root->right->left= new Node(6);
    root->right->right= new Node(7);

    cout << maxDepth(root) << endl;

    return 0;
    
}