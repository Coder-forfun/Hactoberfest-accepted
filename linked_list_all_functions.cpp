#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next=NULL;
        }
};

void insertBegning(Node** head, int value){
    Node* temp=*head;
    Node* newNode=new Node(value);
    
    if(*head==NULL){
        *head=newNode;
        return;
    }

    newNode->next=*head;
    *head=newNode;
}

void insertEnd(Node** head, int value){                            
    Node* newNode = new Node(value);
    Node* temp = *head;                                         
    
    if(*head==NULL){
        *head=newNode;                                        
        return;
    }
    
    while(temp->next!=NULL)
        temp=temp->next;

    temp->next=newNode;
    return;
}

void insertBetween(Node** head, int pos, int value){
    Node* temp=*head;
    Node* newNode = new Node(value);

    if(pos<2){
        insertBegning(head, value);
        return;
    }

    for(int i=0; i<pos-2; i++)
        temp=temp->next;
    
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteNode(Node** head, int pos){
    Node* temp=*head;
    Node* ptr;
    if(*head==NULL)
        return;

    if(pos<2){
        ptr=*head;
        *head=temp->next;
        free(ptr);
        return;
    }

    for(int i=0; i<pos-2; i++)
        temp=temp->next;
    ptr=temp->next;
    temp->next=temp->next->next;
    free(ptr);
    return;
}

void reverseList(Node** head){
    if(*head!=NULL){
        Node* current = *head;
        Node* nxt=NULL;
        Node* prev=NULL;
        while(current!=NULL){
            nxt=current->next;
            current->next=prev;
            prev=current;
            current=nxt;
        }
        *head=prev;
    }
}

void printList(Node* head){
    cout<<"Linked list is: ";
    
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";
}

int main(){
    Node* head=NULL;
    insertEnd(&head, 5);
    insertEnd(&head, 4);
    insertEnd(&head, 6);
    insertEnd(&head, 2);
    printList(head);
    insertBetween(&head, 2, 9);
    printList(head);
    insertBegning(&head, 0);
    printList(head);
    deleteNode(&head, 2);
    printList(head);
    reverseList(&head);
    printList(head);
    return 0;
}