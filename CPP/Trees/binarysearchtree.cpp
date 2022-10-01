#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

class Bst
{  
private:
    node* root;
    void AddLeafPriv(int key,node* Ptr)
    {
        if(root==NULL)
        {
            root=CreateLeaf(key);
        }
        else if(key < Ptr->data)
        {   
            if(Ptr->left !=NULL)
            {
                AddLeafPriv(key,Ptr->left);
            }
            else
            {
                Ptr->left=CreateLeaf(key);//link the new node with left Node
            }
            
        }
        else if(key > Ptr->data)
        {   
            if(Ptr->right !=NULL)
            {
                AddLeafPriv(key,Ptr->right);
            }
            else
            {
                Ptr->right=CreateLeaf(key);
            }
            
        }
        else
        {
            cout<<"This key has already been added to tree"<<endl;
        }   
    }
    void PrintInOrderPriv(node* Ptr)
    {
        if(root!= NULL)
        {
            if(Ptr->left !=NULL)
            {
                PrintInOrderPriv(Ptr->left);
            }
            cout<<Ptr->data<<" ";
            if(Ptr->right != NULL)
            {
                PrintInOrderPriv(Ptr->right);
            }
        }
        else
        {
            cout<<"The tree is empty"<<endl;
        }
        
    }
    node* ReturnNodePriv(int key,node* Ptr)
    {
        if(Ptr!= NULL)
        {
            if(Ptr->data==key)
            {
                return Ptr;
            }
            else
            {
                if(key<Ptr->data)
                {
                    return ReturnNodePriv(key,Ptr->left);
                }
                else
                {
                    return ReturnNodePriv(key,Ptr->right);
                }          
            }
            
        }
        else
        {
            return NULL;
        }
    }
    void RemoveRootMatch()
    {
        if(root != NULL)
        {
            node* delPtr=root;
            int rootkey= root->data;
            int smallestRightSubTree;

            if(root->left==NULL && root->right==NULL)
            {
                root=NULL;
                delete delPtr;
            }
            //if there's 1 Child
            else if(root->left == NULL && root->right!=NULL)
            {
                root= root->right;
                delPtr->right=NULL;
                delete delPtr;
                cout<<"Root node with key "<<rootkey<<" was deleted "<<"new root contains "<<root->data<<endl;

            }
            else if(root->right == NULL && root->left!=NULL)
            {
                root= root->left;
                delPtr->left=NULL;
                delete delPtr; 
                cout<<"Root node with key "<<rootkey<<" was deleted "<<"new root contains "<<root->data<<endl;
                
            }
            //if root has 2 childs
            else
            {
                smallestRightSubTree=FindSmallestPrivate(root->right);
                RemoveNodePriv(smallestRightSubTree,root);
                root->data =smallestRightSubTree;
                cout<<"The root key containing " << rootkey << "was over written with key"<< root->data<<endl;
            }
            
        }
        else
        {
            cout<<"Tree is Empty so cannot remove node !"<<endl;
        }
        
    }
     int FindSmallestPrivate(node* Ptr)
    {
        if(root == NULL)
        {
          cout<<"tree is empty"<<endl;
          return -99999;
        }
        else
        {
            if(Ptr->left!=NULL)
            {
                return FindSmallestPrivate(Ptr->left);
            }
            else
            {
                return Ptr->data;
            }
            
        }
        
    }
    void RemoveMatch(node* parent,node* match, bool left)
    {
        if(root != NULL)
        {
            node* delPtr;
            int matchKey = match->data;
            int smallestInRightTree;
            if(match->left==NULL && match->right ==NULL)
            {
                delPtr = match;
                left == true? parent->left=NULL: parent->right=NULL;
                delete delPtr;

            }
            else if(match->left==NULL && match->right !=NULL)
            {
                left == true? parent->left= match->right: parent->right=match->right;
                delPtr=match;
                delete delPtr;
            } 
             else if(match->left!=NULL && match->right ==NULL)
            {
                left == true? parent->left= match->left: parent->right=match->left;
                delPtr=match;
                delete delPtr;
            }


        }
        else
        {
            cout<<"Cannot remove match"<<endl;
        }
        
    }
    void RemoveNodePriv(int key,node* parent)
    {
        if(root!=NULL)
        {
            if(root->data == key)
            {
                RemoveRootMatch();
            }
            else
            {
                if(key < parent->data && parent->left!=NULL)
                {
                    parent->left->data==key ?
                    RemoveMatch(parent,parent->left,true):
                    RemoveNodePriv(key,parent->left);
                }

                
                else if(key > parent->data && parent->right!=NULL)
                {
                    parent->right->data==key ?
                    RemoveMatch(parent,parent->right,true):
                    RemoveNodePriv(key,parent->right);
                }
                else
                {
                    cout<<"The Key doest not exist in tree"<<endl;
                }            
            }     
        }
        else
        {
            cout<<"tree is empty"<<endl;
        }
        
    }
    int FindHeightOfTreePriv(node* Ptr)
    {
        static int rightHt=0;
        static int leftHt=0;
        if(Ptr!=NULL)
        {
            if(Ptr->left!=NULL)
            {
                leftHt++;
                FindHeightOfTreePriv(Ptr->left);
            }
            else if(Ptr->right=NULL)
            {
                rightHt++;
                FindHeightOfTreePriv(Ptr->right);
            }
            if(rightHt>leftHt)
            {
                return rightHt;
            }
            else
            {
                return leftHt;
            }
            
        }
        else
        {
            return -999999;
        }
        
        
    }
    int CountNodePriv(node* Ptr)
    {
        static int size=0;
        if(root!= NULL)
        {
            if(Ptr->left !=NULL)
            {
                CountNodePriv(Ptr->left);
            }
            size++;
            if(Ptr->right != NULL)
            {
                CountNodePriv(Ptr->right);
            }
            return size;
        }
        else
        {
            return -999999;
            cout<<"The tree is empty"<<endl;
        }
        
    }
public:

    Bst()
    {
        root=NULL;
    }

    node* CreateLeaf(int data)
    {
        node* n =new node;
        n->data=data;
        n->left=NULL;
        n->right=NULL;
          return n;
    }
    void AddLeaf(int key)
    {
        AddLeafPriv(key,root);
    }
    void PrintInOrder()
    {
        PrintInOrderPriv(root);
    }

    node* ReturnNode(int key)
    {
       return ReturnNodePriv(key,root);
    }
    bool search(int key)

    {
        node* searchNode ;
        searchNode=ReturnNode(key);
        if(searchNode->data == key)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

    int ReturnRootKey()
    {
        if(root!=NULL)
        {
            return root->data;
        }
        else
        {
            return -9999999;
        }
        
    }

    void PrintChildren(int key)
    {
        node* Ptr = ReturnNode(key);
        if(Ptr!=NULL)
        {
            cout<< "Parent Node = " << Ptr->data<<endl;
            Ptr->left ==NULL ?
            cout<<"Left Child is NULL\n":
            cout<<"Left Child = "<<Ptr->left<<endl;

            Ptr->right ==NULL ?
            cout<<"Right Child is NULL \n":
            cout<<"Left Child = "<<Ptr->right<<endl;
        }
        else
        {
            cout<<"The key is not in Tree"<<endl;
        }
        
    }
    void RemoveNode(int key)
    {
        RemoveNodePriv(key,root);
    }
    void RemoveSubTree(node* Ptr)
    {
        if(Ptr != NULL)
        {
            if(Ptr->left !=NULL)
            {
                RemoveSubTree(Ptr->left);
            }
            if(Ptr->right !=NULL)
            {
                RemoveSubTree(Ptr->right);
            }
            delete Ptr;
        }
    }
    int FindHeightOfTree()
    {
        return FindHeightOfTreePriv(root);
    }
    int CountNode()
    {
        return CountNodePriv(root);
    }
    ~Bst()
    {
        RemoveSubTree(root);
    }

};

int main()
{
    int TreeData[10]={10,9,8,7,6,54,3,2,5,1};

    Bst tree; 


    tree.PrintInOrder();
    for(int i=0;i<10;i++)
    {
        tree.AddLeaf(TreeData[i]);
    }
    tree.PrintInOrder();   
    cout<<endl;         
    cout<<"Height of TREE IS: "<<tree.FindHeightOfTree()<<endl;
    cout<<"Number of nodes in the tree are : "<<tree.CountNode();

    return 0;
}
