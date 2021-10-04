//
// Created by abhi on 04/09/2021.
//
//in this code we merge two sorted linked list
//i use my own custom class of douby linked list
//it is basically a linked list version of merge sort 
#include "doublyll.cpp"
node* merge(node* &head1,node* &head2){
node* temp1=head1;
node* temp2=head2;
node* newhead=new node(0);
node* temp3 =newhead;
while(temp1!=NULL && temp2 != NULL){
    if(temp1->data<temp2->data){
        temp3->next=temp1;
        temp3=temp3->next;
        temp1=temp1->next;
    }else{
        temp3->next=temp2;
        temp3=temp3->next;
        temp2=temp2->next;
    }
}
while(temp2!=NULL){
    temp3->next=temp2;
    temp3=temp3->next;
    temp2=temp2->next;
}
while(temp1!=NULL){
    temp3->next=temp1;
    temp3=temp3->next;
    temp1=temp1->next;
}
    return newhead->next;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,3);
    insertAtTail(head1,5);
    insertAtTail(head1,7);
    insertAtTail(head1,9);
    insertAtTail(head2,2);
    insertAtTail(head2,4);
    insertAtTail(head2,6);
    insertAtTail(head2,8);
    insertAtTail(head2,10);
    display(head1);
    display(head2);
    node* newhead=merge(head1,head2);
    display(newhead);

    return 0;
}
