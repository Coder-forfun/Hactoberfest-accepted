#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
template<typename T>
class Node
{
    public:
    T data;
    Node* next; 
    Node* prev; 

    Node(T newData){
        data=newData;
        next=NULL;
        prev=NULL;
    }
};
template<typename T>
void printLL(Node<T>*head){
    Node<T>*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<endl;
}
template<typename T>
Node<T>* insertBegin(Node<T>* head, T newData){
    Node<T>*newNode=new Node<T>(newData);
    newNode->next=head;
    head->prev=newNode;
    return newNode;
}
template<typename T>
Node<T>* insertEnd(Node<T>*head, T newData){
    if(head==NULL)return NULL;
    Node<T>*newNode=new Node<T>(newData);
    Node<T>*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}
template<typename T>
Node<T>* deleteBegin(Node<T>*head){
    if(head==NULL)return NULL;
    Node<T>*nxt=head->next;
    delete head;
    nxt->prev=NULL;
    return nxt;
}
template<typename T>
Node<T>* deleteEnd(Node<T>*head){
    if(head==NULL)return NULL;
    Node<T>*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node<T>*newLastNode=temp->prev;
    newLastNode->next=NULL;
    delete temp;
}

template<typename T>
Node<T>* insertAfter(Node<T>*head, Node<T>*givenNode, T newData){
    if(head==NULL)return NULL;
    Node<T>*temp=head;
    while(!(temp==NULL  || temp==givenNode)){
        temp=temp->next;
    }
    if(temp==NULL)return head;
    Node<T>*newNode=new Node<T>(newData);
    if(temp->next==NULL){
        temp->next=newNode;
    }
    else{
        Node<T>*nxt=temp->next;
        temp->next=newNode;
        newNode->prev=temp;
        newNode->next=nxt;
        nxt->prev=newNode;
    }
    return head;
}

template<typename T>
Node<T>* insertBefore(Node<T>*head, Node<T>*givenNode, T newData){
    if(head==NULL)return NULL;
    Node<T>*temp=head;
    while(!(temp==NULL  || temp==givenNode)){
        temp=temp->next;
    }
    if(temp==NULL)return head;
    Node<T>*newNode=new Node<T>(newData);
    if(temp->prev==NULL){
        newNode->next=temp;
        temp->prev=newNode;
        return newNode;
    }
    else{
        Node<T>*previous=temp->prev;
        previous->next=newNode;
        newNode->next=temp;
        temp->prev=newNode;
        return head;
    }
}

template<typename T>
Node<T>* deleteAfter(Node<T>*head, Node<T>*givenNode){
    if(head==NULL)return NULL;
    Node<T>*temp=head;
    while(!(temp==NULL  || temp==givenNode)){
        temp=temp->next;
    }
    if(temp==NULL)return head;
    Node<T>*nxt=temp->next;
    if(nxt==NULL)return head;
    Node<T>* nxt2=nxt->next;
    temp->next=nxt2;
    if(nxt2!=NULL)nxt2->prev=temp;
    delete nxt;
    return head;
}
template<typename T>
Node<T>* deleteBefore(Node<T>*head, Node<T>*givenNode){
    if(head==NULL)return NULL;
    Node<T>*temp=head;
    while(!(temp==NULL  || temp==givenNode)){
        temp=temp->next;
    }
    if(temp==NULL)return head;
    Node<T>*previous=temp->prev;
    if(previous==NULL)return head;
    Node<T>*previous2=previous->prev;
    if(previous2==NULL){
        temp->prev==NULL;
        delete previous;
        return temp;
    }
    else{
        previous2->next=temp;
        temp->prev=previous2;
        delete previous;
        return head;
    }
}

int main(){

    // making a new doubly linked list as 10->20->30->40
    Node<int>*head=new Node<int>(10);
    Node<int>*node2=new Node<int>(20);
    Node<int>*node3=new Node<int>(30);
    Node<int>*node4=new Node<int>(40);

    head->next=node2;
    node2->prev=head;
    node2->next=node3;
    node3->prev=node2;
    node3->next=node4;
    node4->prev=node3;


    cout<<"0: print LL"<<endl;
    cout<<"1: insertBegin"<<endl;
    cout<<"2: insertEnd"<<endl;
    cout<<"3: deleteBegin"<<endl;
    cout<<"4: deleteEnd"<<endl;
    cout<<"5: insertAfter"<<endl;
    cout<<"6: insertBefore"<<endl;
    cout<<"7: deleteAfter"<<endl;
    cout<<"8: deleteBefore"<<endl;
    cout<<"-1: exit code"<<endl;
    int choice=0;
    while(choice!=-1){
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice){
            case 0:{
                printLL(head);
                break;
            }
            case 1:{
                cout<<"enter data:"<<endl;
                int data;
                cin>>data;
                head=insertBegin(head, data);
                break;
            }
            case 2:{
                cout<<"enter data:"<<endl;
                int data;
                cin>>data;
                head=insertEnd(head, data);
                break;
            }
            case 3:{
                head=deleteBegin(head);
                break;
            }
            case 4:{
                head=deleteEnd(head);
                break;
            }
            case 5:{
                cout<<"enter data:"<<endl;
                int data;
                cin>>data;
                head=insertAfter(head, node2, data);
                break;
            }
            case 6:{
                cout<<"enter data:"<<endl;
                int data;
                cin>>data;
                head=insertBefore(head, node3, data);
                break;
            }
            case 7:{
                head=deleteAfter(head, head);
                break;
            }
            case 8:{
                head=deleteBefore(head, node4);
                break;
            }
            case -1 :{
                break;
            }

        }
    }
    

    return 0;
}
