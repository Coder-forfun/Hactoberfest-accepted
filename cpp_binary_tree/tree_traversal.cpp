#include<bits/stdc++.h>
using namespace std;

class TreeNode {
    public:
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int data) {
        this->data = data;
    }
};

void bfs(TreeNode *root) {
    if(root == NULL) return;
    queue<TreeNode *> q;
    q.push(root);
    while (q.empty() == false) {
        TreeNode *current = q.front();
        q.pop();
        cout << current->data << " ";
        if(current->left != NULL) q.push(current->left);
        if(current->right != NULL) q.push(current->right);
    }
}

void inOrder(TreeNode *root) {
    if(root == NULL) return;
    inOrder(root->left);
    cout  << root->data;
    inOrder(root->right); 
}

void preOrder(TreeNode *root) {
    if(root == NULL) return;
    cout  << root->data;
    preOrder(root->left);
    preOrder(root->right); 
}

void postOrder(TreeNode *root) {
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right); 
    cout  << root->data;
}

int main() {
    TreeNode *root = new TreeNode(10);
    TreeNode *node1 = new TreeNode(20);
    TreeNode *node2 = new TreeNode(30);
    root->left = node1;
    root->right = node2;
}