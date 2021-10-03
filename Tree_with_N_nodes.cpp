// This code will take input from user and construct a Tree and print both BFS and DFS

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Tree Node (TreeNode class)
template <typename T>
class TreeNode
{
public:
    T val;
    vector<TreeNode<T> *> node;

    // Constructor
    TreeNode(T val)
    {
        this->val = val;
    }
};

// Code to take tree values from user
TreeNode<int> *Take_tree_values()
{
    cout << "Enter root data" << endl;
    int root_val;
    cin >> root_val;
    TreeNode<int> *root = new TreeNode<int>(root_val);

    queue<TreeNode<int> *> nodes;
    nodes.push(root);
    while (!nodes.empty())
    {
        TreeNode<int> *front = nodes.front();
        nodes.pop();
        cout << "Enter number of nodes of " << front->val << endl;
        int num_node;
        cin >> num_node;
        for (int i = 0; i < num_node; i++)
        {
            int node_val;
            cout << "Enter " << i << " th child of " << front->val << endl;
            cin >> node_val;
            TreeNode<int> *node = new TreeNode<int>(node_val);
            front->node.push_back(node);
            nodes.push(node);
        }
    }

    return root;
}


// Code to print Tree Data Recursive (DFS)
void print_tree(TreeNode<int> *root)
{
    if (root == nullptr)
        return;
    cout << root->val << ":";
    for (int i = 0; i < root->node.size(); i++)
    {
        cout << " " << root->node[i]->val << "  ";
    }
    cout << endl;
    for (int i = 0; i < root->node.size(); i++)
    {
        print_tree(root->node[i]);
    }
}

// Code to print Tree Data level wise (BFS)
void print_tree_levelwise(TreeNode<int> *root)
{
    if (root == nullptr)
        return;
    queue<TreeNode<int> *> nodes;
    nodes.push(root);
    while (!nodes.empty())
    {
        TreeNode<int> *front = nodes.front();
        nodes.pop();
        cout << front->val << ":";
        for (int i = 0; i < front->node.size(); i++)
        {
            cout << " " << front->node[i]->val << "  ";
            nodes.push(front->node[i]);
        }
        cout << endl;
    }
}

//Main starts here...
int main()
{
    TreeNode<int> *root = Take_tree_values();
    cout<<"Depth first search...."<<endl;
    print_tree(root);
    cout<<"Breadth first search...."<<endl;
    print_tree_levelwise(root);
    return 0;
}