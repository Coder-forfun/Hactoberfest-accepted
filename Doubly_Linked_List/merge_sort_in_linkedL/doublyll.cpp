//
// Created by abhi on 04/09/2021.
//
#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* prev;
    node* next;
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertAthead(node* &head,int val){
    node* n= new node(val);
    if(head!=NULL){
        head->prev=n;
        n->next=head;
        head=n;
    }
    head=n;
}
void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteAtHead(node* &head){
    node* todelete=head;
    if(head->next!=NULL){
    head->next->prev=NULL;
    head= head->next;} else head=NULL;
    delete todelete;
}
void deleteAt(node* &head, int pos){
    if(head==NULL)return;
    if(head->next==NULL){deleteAtHead(head);
    return;  }
    node* temp = head;
    int count=1;
    while(temp->next!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    node* todelete=temp;
    if(temp->next!=NULL){
    temp->prev->next=temp->next;
    temp->next->prev= temp->prev;}
    else temp->prev->next=NULL;
    delete todelete;


}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<"<->";
        head=head->next;
    }
    cout<<endl;
}
int length(node* head){
    if(head==NULL)return 0;
    int count=1;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}