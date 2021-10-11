#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int value){
data=value;
next=NULL;
}
};
class stack{
public:
node* top;
node* bottom;
int length = 0;
stack(){
top=NULL;
bottom=NULL;
length=0;
}
void push(node* &head,int value){
    node* temp=head;
    node* n = new node(value);
if(length==0){
    head=n;
    top=n;
}else{
top->next=n;
top=n;

}
length++;
}
void display(node* head){
   if(length==0){
        cout<<"NOTHING TO DISPLAY";
   }else{
    while(head!=NULL){
        cout<<head->data<<"-->";
        head=head->next;
    }
    cout<<"NULL";
}
}
void peek(){
    cout<<"\nTop Data: "<<top->data;
}
void DELETE(node* &head){
   if(length==0){
       cout<<"Stack is UNDERFLOWN";
   }
   else{
    node* temp = top;
    node* prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    top=prev;
    delete(temp);

}
}
};
int main()
{
 stack* s = new stack;
 node* head=NULL;
 s->push(head,2);
 s->push(head,3);
s->push(head,12);
s->push(head,13);
s->push(head,18);
 s->display(head);
 cout<<"\n";
//  s->DELETE(head);
//  s->display(head);
//  s->DELETE(head);
//  s->display(head);
 s->peek();
// s->peek();
 return 0;
}
