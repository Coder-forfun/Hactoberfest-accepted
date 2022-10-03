#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Creating a node structure
struct Node
{
    int data;
    int height;
    struct Node *left;
    struct Node *right;
};
//Giving Alias to the node structure
typedef struct Node Node;
//Defining the max function
int max(int x, int y)
{
    return (x > y) ? x : y;
}
//Algorithm to calculate Height(as taught in class)
int Height(Node *root)
{
    if (root == NULL){
        return 0;
    }
    else if(root->left == NULL && root->right == NULL){
        return 0;
    }
    return max(Height(root->left) + 1, Height(root->right) + 1);
}
//Fuction to intialize the node structure
Node *create_node(int data)
{
    Node *ptr = malloc(sizeof(Node));
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;
    ptr->height = 0;
    return ptr;
}
int balance_factor(Node *root)
{
    if(root->left == NULL){
        return -(root->right->height);
    }
    else if(root->right == NULL){
        return (root->left->height);
    }
    return (root->left->height) - (root->right->height);
}
Node *Rotate_Right(Node *root)
{
    Node *left_tree=root->left;
    root->left = left_tree->right;
    left_tree->right = root;
    root->height = Height(root);
    left_tree->height = Height(left_tree);
    return (left_tree);
}

Node *Rotate_Left(Node *root)
{
    Node *right_tree=root->right;
    root->right = right_tree->left;
    right_tree->left = root;
    root->height = Height(root);
    right_tree->height = Height(right_tree);
    return (right_tree);
}

Node *Correct_RR_Imbalance(Node *Root)
{
    Root = Rotate_Left(Root);
    return (Root);
}

Node *Correct_LL_Imbalance(Node *Root)
{
    Root = Rotate_Right(Root);
    return (Root);
}
Node* Correct_LR_Imbalance(Node *Root)
{
    Root->left = Rotate_Left(Root->left);
    Root = Rotate_Right(Root);
    return (Root);
}
Node* Correct_RL_Imbalance(Node *Root)
{
    Root->right = Rotate_Right(Root->right);
    Root = Rotate_Left(Root);
    return (Root);
}
Node *insert_node(Node *Root, int value)
{
    if (Root == NULL)
    {
        Root = (Node *)malloc(sizeof(Node));
        Root->data = value;
        Root->left = NULL;
        Root->right = NULL;
    }
    else if (value > Root->data) 
    {
        Root->right = insert_node(Root->right, value);
        if (balance_factor(Root) <= -2)
            Root=(value > Root->right->data)?Correct_RR_Imbalance(Root):Correct_RL_Imbalance(Root);
    }
    else if (value < Root->data)
    {
        Root->left = insert_node(Root->left, value);
        if (balance_factor(Root) >= 2)
            Root=(value<Root->left->data) ?Correct_LL_Imbalance(Root):Correct_LR_Imbalance(Root);
    }
    Root->height = Height(Root);
    return (Root);
}

Node *Delete_node(Node *Root, int value)
{
    Node *ptr;
    if (Root == NULL)
    {
        return NULL;
    }
    else if (value > Root->data) 
    {
        Root->right = Delete_node(Root->right, value);
        if (balance_factor(Root) >= 2)
            Root=(balance_factor(Root->left) >= 0)?Correct_LL_Imbalance(Root):Correct_LR_Imbalance(Root);
    }
    else if (value < Root->data)
    {
        Root->left = Delete_node(Root->left, value);
        if (balance_factor(Root) <= -2) 
            Root=(balance_factor(Root->right)<=0)?Correct_RR_Imbalance(Root):Correct_RL_Imbalance(Root);
    }
    else
    {   
        if (Root->right != NULL)
        { 
            ptr = Root->right;
            while (ptr->left != NULL)
                ptr = ptr->left;
            Root->data = ptr->data;
            Root->right = Delete_node(Root->right, ptr->data);
            if (balance_factor(Root) == 2) 
                Root=(balance_factor(Root->left) >= 0)?Correct_LL_Imbalance(Root):Correct_LR_Imbalance(Root);
        }
        else
            return (Root->left);
    }
    Root->height = Height(Root);
    return (Root);
}

Node *search(Node *Root, int data)
{
    if (Root == NULL)
    {
        return NULL;
    }
    if (Root->data == data)
    {
        return Root;
    }
    if (Root->data > data)
    {
        return search(Root->left, data);
    }
    if (Root->data < data)
    {
        return search(Root->right, data);
    }
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
void preorder(Node *root){
    if (root == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
    
}
void printTree(Node *root, int gap)
{
    if (root == NULL)
        return;
    gap += 1;
    printTree(root->right, gap);
    for (int i = 1; i < gap; i++)
        printf("\t");
    printf("%d_%d\n", root->data, root->height);
    printTree(root->left, gap);
}
int main()
{
    int n1 = 10;
    Node *root1 = NULL;
    int A1[] = {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < n1; i++)
    {
        root1 = insert_node(root1, A1[i]);
    }
    inorder(root1);
    printf("\n");
    printTree(root1, 0);
    printf("\n%d\n", Height(root1));

    int n2 = 13;
    Node *root2 = NULL;
    int A2[] = {11,12,13,14,15,16,17,18,19,20,21,22,23};
    for (int i = 0; i < n2; i++){
        root2 = insert_node(root2, A2[i]);
    }
    inorder(root2);
    printf("\n");
    printTree(root2, 0);
    printf("\n%d\n", Height(root2));

    return 0;
}