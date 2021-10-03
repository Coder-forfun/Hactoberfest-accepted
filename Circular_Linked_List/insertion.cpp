                    //  CIRCULAR LINKED LIST-INSERTION
 #include <iostream>
using namespace std;
struct node
{
    int data;
    node*next;
};
node*tail,*temp;
void insertatlast(int x)
{  node*ptr=new node();
   ptr->data=x;
   ptr->next=NULL;
   if(tail==NULL)
   {
       tail=ptr;
       tail->next=ptr;
   } 
   else
   {
       ptr->next=tail->next;
       tail->next=ptr;
       tail=ptr;
   }
   
}
    void insertAtanupos(int z)
    {  node*ptr=new node();
      ptr->data=z;
      ptr->next=NULL;
      int i=1;
      int pos;
      cout<<"position u want to insert\n";
      cin>>pos;
      node*temp=tail->next;
      for(int i=1; i<pos-1;i++)
      {
        temp=temp->next;
      }
      ptr->next=temp->next;
      temp->next=ptr;
    }
    void print()
    {
      node*temp=tail->next;
     do
     {
         cout<<temp->data<<"  ";
         temp=temp->next;
     } while (temp!=tail->next);
     
    }
    void insertbeg(int y)
    { node*ptr=new node();
      ptr->data=y;
      ptr->next=NULL;
      if(tail==NULL)
      {
          tail=ptr;
          tail->next=ptr;
      }
      else                                   
      {
          ptr->next=tail->next;
          tail->next=ptr;
      }
    }
   void checkCircular(){
     cout<<tail->next->data;
   }
int main()
{ char ch;
  int x,y,z;
 tail=NULL;
 while(1)
 {
     cout<<"enter your choice\n 1.insertbeginning 2.insertatLast 3.insertatAnupos 4.print 5. checkCircular \n";
     cin>>ch;
   if(ch=='1')
   { cout<<"enter input data";

       cin>>y;
     insertbeg(y);
   }
   if(ch=='2')
   { cout<<"enter input data";
       cin>>x;
     insertatlast(x);
   }
   if(ch=='3')
   { cout<<"data u want to insert\n";
       cin>>z;
       insertAtanupos(z);
   }
  
    if(ch=='4')
   {
       print();
   }
    if(ch=='5')
   {
      checkCircular();
   }
 }
    return 0;
}

