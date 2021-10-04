#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

typedef struct Node* node;


Node* createDLL(int n){
    node curr,head = NULL;
    for(int i=0;i<n;i++){
        if(i==0){
            head  = new Node();
            head->next=NULL;
            head->prev = NULL;
            curr = head;
        }else{
            node newnode = new Node();
            newnode->next=NULL;
            curr->next = newnode;
            newnode->prev = curr;
            curr = newnode;
        }
    }
       return head;      
}

void display(Node* head){
    node temp = head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* insertdata(Node* head){
    node temp = head;
    int k=0;
    while(temp!=NULL){
        cout<<"Enter the value for Node   "<<k<<" : ";
        cin>>temp->data;
        cout<<"\n";
        temp=temp->next;
        k=k+1;
    }
}

Node* reverseDLL(Node* head){
    node temp = head;
    if(temp == NULL){
        return NULL;
    }
    if(temp->next == NULL){
        return head;
    }
    else{
        node prevadd;
        while(temp!=NULL){
            prevadd = temp->next;
            temp->next = temp->prev;
            temp->prev = prevadd;
            head = temp;
            temp = temp->prev;
        }
        return head;
    }
}




int main(){
    int nNodes;
    cout<<"Enter the number of nodes : \n";
    cin>>nNodes;
    cout<<"\n";
    node head = createDLL(nNodes);
    insertdata(head);
    cout<<"Original Linked List : \n";
    display(head);
    head = reverseDLL(head);
    cout<<"\nReversed Linked List : \n";
    display(head);
    return 0;

}