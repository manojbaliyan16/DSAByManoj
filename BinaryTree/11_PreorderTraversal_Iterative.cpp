#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
  // Iterative Preorder
 vector<int> preorderTraversal(TreeNode* root) {
        if(root==nullptr) return {};
        vector<int> res;
        stack<TreeNode*> st;
        st.push(root); // first push the root 
        while(!st.empty()){
            TreeNode* t= st.top();
            st.pop();
            res.push_back(t->val); // save its value 
            if(t->right) st.push(t->right); // if right node exist push it 
            if(t->left) st.push(t->left); // if left node exist push it into stack 
            // As these nodes are getting pushed into stack so when it will come out so first left node will come out and then right node will come out 
            //  so it will be  root, left and right fashion means Preorder
        }
        return res;
    }

// Preorder
vector<int> preorderTraversal(TreeNode* root){
    vector<int> ret;
    stack<TreeNode*> st;
    TreeNode* p=root;
    while(p||!st.empty()){
        if(p){
            st.push(p);
            ret.push_back(p->val);
            p=p->left;
        } else{
            p=st.top();st.pop();
            p=p->right;
        }
    }

}


// Iterative Inorder

vector<int> preorderTraversal(TreeNode* root){
    vector<int> ret;
    stack<TreeNode*> st;
    TreeNode* p=root;
    while(p || !st.empty()){
        while(p){
            s.push(p);
            p=p->left;
        }
        p=st.top();st.pop();
        ret.push_back(p->val);
        p=p->right;

    }
    return ret;
}

 vector<int> postorderTraversal(TreeNode* root){
        if (!root) return {};
        vector<int> res;
        stack<TreeNode*> s{{root}};
        while (!s.empty()) {
            TreeNode *t = s.top(); s.pop();
            res.insert(res.begin(), t->val);
            if (t->left) s.push(t->left);
            if (t->right) s.push(t->right);
        }
        return res;
    }

