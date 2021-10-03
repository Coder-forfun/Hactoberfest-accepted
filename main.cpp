
#include <iostream>
#include <fstream>

using namespace std;
class Node
{
private:

    int data;
    Node *next;
    Node *prev;
public:
    Node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
    void setData(int d)
    {
        data=d;
    }
    void setNext(Node *t)
    {
        next=t;
    }
    void setPrev(Node *p)
    {
        prev=p;

    }
    int getData()
    {
        return data;
    }
    Node *getNext()
    {
        return next;
    }
    Node *getPrev()
    {

        return prev;
    }
};
class Linked_list
{
private:
    Node *first;
    Node *none;
public:
    Linked_list()
    {
        first=NULL;
        none=NULL;
    }
    void display()
    {
        Node *temp=first;
        if(temp==NULL)
        cout<<"No Data!"<<endl;
        while(temp!=NULL)
        {
            cout<<"------------------------------"<<endl;
            cout<<temp->getData()<<endl;
            temp=temp->getNext();
            //  std::cout << temp->getData() << '\n';
        }
    }


    void addAtStart(int st)
      {
        Node *temp2 = new Node(st);
        Node *temp = first;
        if(first==NULL){
            first=temp2;

        }
        else if(first->getNext()==NULL){
            first = temp2;
        temp2->setNext(temp);


        }
        else
        {
            first = temp2;
        temp2->setNext(temp);
        first->getNext()->setPrev(temp);
      }
      }
    void addAtEnd(int end)
    {
        Node *temp2=new Node(end);
        Node *temp=first;
        if(temp==NULL){
          addAtStart(end);


        }
        else
        {
        while(temp->getNext()!= NULL)
        {
            temp=temp->getNext();
            //cout<<"stuked here!"<<endl;
        }
            temp->setNext(temp2);
            temp2->setNext(NULL);
            temp2->setPrev(temp);
    }
}
    void deleteAtStart()
    {
        Node *temp=first;
        Node *t=NULL;
        if(temp==NULL){
            cout<<"NO Data!"<<endl;
        }
        else if(temp->getNext()==NULL)
        {
            first=NULL;

        }
        //(temp!=NULL)
       else
       {
        first=temp->getNext();
        first->setPrev(t);
       }
   // else
     //   cout<<"NO DATA!"<<endl;
    }
    void deleteAtEnd()
        {
            Node *temp =first;
            if(temp==NULL){

            cout<<"INVALID COMMAND!"<<endl;
        }

        if(temp->getNext()==NULL)
        deleteAtStart();
        else{
            while(temp->getNext()->getNext()!= NULL)
        {
            temp= temp->getNext();
        }
        temp->setNext(NULL);

  }
}
   void removeAt( int index){
          Node *temp = first;
          Node *temp2 = first;
          int count=1;
          if(first==NULL){

            cout<<"Sorry list is Empty!"<<endl;
          }

    else if(index==0)
    deleteAtStart();
    else
    {
        while(count < index){



        temp =temp -> getNext();
        count++;
    }

    if(temp->getNext()==NULL)
    deleteAtEnd();

    else
      {      //temp2=temp->getNext();
            temp->setNext(temp->getNext()->getNext());
            temp->getNext()->setPrev(temp);
          }
  }
}

    void addAtIndex(int d,int val){
      Node *temp = first;
      Node *temp2=new Node (val);
      //Node *temp3;
      int g;
      g=getSize();
      if(d>g)
      addAtEnd(val);
      else
      if(d<g){
    int counter=0;
        if(temp2->getNext()!=NULL)
    addAtEnd(val);

    else if(d==1){
    temp2->setNext(first->getNext());
    first->setNext(temp);
    }
    else if(d==0 || temp==NULL){
     addAtStart(val);
    }
    else
    {
     temp=first;
     for(int x=1; x<d; x++)
     {
       temp=temp->getNext();
     }

     temp2->setNext(temp->getNext());
     temp->setNext(temp2);
     temp2->setPrev(temp);
     temp2->getNext()->setPrev(temp2);

   }
 }
    }

    int getSize(){
      Node *temp=first;
      int count=0;
      if(temp==NULL){
      return(count);
      }
      else
      {
        while(temp!=NULL){

          count++;
          temp=temp->getNext();
        }
        return(count);
      }
    }
void findIndex(int vel)
{
      Node *temp=first;
      int chk=0;
      if(temp==NULL)
      cout<<"NO Data to check!"<<endl;

else if(temp->getNext()!= NULL){
     temp=first;
      while(temp->getNext()!=NULL){
      if(temp->getData()==vel)
      chk++;
        temp=temp->getNext();
      }
      if(temp->getNext()==NULL)
      {
        if(temp->getData()==vel)
        chk++;
      }
if(chk==0)
cout<<"The given Value is Not FOUND in the List"<<endl;
else
{
    temp=first;
    int x;
  for(x=0 ;temp->getData()!=vel ; x++){
      temp =temp->getNext();

  }
  cout<<"The Index No. of given Data is:"<<x<<endl;
}
}
}
void  findValue(int in)
{
  Node *temp=first;
  int cont=0;
int h=getSize();
  if(in>h)
  {
    cout<<"There is no Data in that Index!"<<endl;

  }
  if(in<h){
    if(temp==NULL)
    cout<<"No Data to find!"<<endl;
    else{
      int i=0;
  while(i<in){
    temp=temp->getNext();
i++;
  }
  cout<<"The value at index:"<<in<<" is:"<<temp->getData()<<endl;
}
  }
}
void sameVal(int intgr){
  Node *temp =first;
  int cont=0;
  if(temp==NULL)
    cout<<"NO DATA in LIST!"<<endl;
    if(first->getData()==intgr)
    deleteAtStart();

else
{
    while(temp->getNext()!=NULL)
    {
      temp=temp->getNext();
      if(temp->getData()==intgr)
      cont++;
    }

     if(cont==0)
     cout<<"No data FOUND!"<<endl;
     else{
       if(temp->getNext()==NULL)
       {
         deleteAtEnd();
       }

       else{
         temp->setNext(temp->getNext()->getNext());
           }

     }
   }

}






 void asndOrder(int a)
 {
        Node *temp=first;
        Node *temp2=new Node(a);
        int counter=0;
        if(first==NULL)
        {
            addAtStart(a);
               /* first->setNext(temp2);
                temp2->setPrev(first);
                temp2->setNext(NULL);*/
        }
       else if(temp->getNext()==NULL)
        {
            if(temp->getData()<=temp2->getData())
            {
                /*temp2->setNext(NULL);
                temp->setNext(temp2);
                temp2->setPrev(temp);
               //temp->getNext()->setPrev(temp2);
            */
            counter++;
            }
            /*else
            {
            addAtEnd(a);
            }*/
        }
        else {
        while(temp->getNext()!=NULL)
        {
            if(temp->getData()<=temp2->getData())
            {
               counter++;

            }

            /*else
            {
             addAtEnd(a);
            }*/
                temp=temp->getNext();

        }
        }
        if(counter==0);
        addAtEnd(a);
        if(counter!=0)
        {

                temp2->setNext(temp->getNext());
                temp->setNext(temp2);
                temp2->setPrev(temp);
                temp2->getNext()->setPrev(temp2);
        }
        }
                int findEnd(int v)
                {
                    Node *temp =first;
                   // Node *temp2= new Node(v);
                    int cont=0;
                    int counter=0;
                    while(temp->getNext()!=NULL)
                    {
                        if(temp->getData()==v)
                          {

                            counter++;


                          }
                        temp=temp->getNext();

                    }
                    if(counter==0)
                        cout<<"no data"<<endl;
                    else
                    {


                        while(temp->getData()!= v)
                           {

                            temp=temp->getPrev();
                            cont++;


                            }
                            cout<<cont;

                        return cont;
                 }
                }

        void displayFirstQueue(){
          Node *temp=first;
          if(temp==NULL){
            cout<<"No Data!"<<endl;

        }
        else
            cout<<first->getData()<<endl;
        }
        void displayBackPeek(){
           Node *temp = first;
           if(temp==NULL)
           {
               cout<<"No Data!"<<endl;
           }
           else if(temp->getNext()==NULL){
                cout<<temp->getData()<<endl;
           }
           else
           {
               while(temp->getNext()!=NULL){
                temp=temp->getNext();


               }
               cout<<temp->getData()<<endl;

           }

        }
        void displayTopPeek(){
           Node *temp = first;
           if(temp==NULL){
            cout<<"No Data!"<<endl;
           }
           else if(temp->getNext()==NULL){
             cout<<temp->getData()<<endl;
           }
           else{
            while(temp->getNext()!=NULL){
                temp=temp->getNext();

            }
            cout<<temp->getData()<<endl;
           }

        }
        void reverseQ(){
                Node *temp =first;

                Node *temp2=first;

            if(temp==NULL){
                cout<<"No Data!"<<endl;
            }
            else{
                while(temp->getNext()!=NULL){
                    temp=temp->getNext();
                }
                    first=temp;
                 temp2->setPrev(NULL);
                while(temp!=NULL){

                    temp2->setNext(temp);
                    temp=temp->getPrev();
                    temp2->getNext()->setPrev(temp2);
                    temp2=temp2->getNext();

                }

                temp2->setNext(NULL);
            }
        }

};

class Queue{
    private:
    Linked_list l;
    public:
        void enQueue(int en){
            l.addAtEnd(en);
        }

        void deQueue(){
            l.deleteAtStart();
        }
        void frontPeek(){
            l.displayFirstQueue();
        }
        void displayAll(){
            l.display();
        }
        void qSize(){
            cout<<"The size of Queue is:"<<l.getSize()<<endl;
        }
        void qFind(int v){
            l.findIndex(v);
        }
        void backPeek(){
            l.displayBackPeek();
        }
        void reverseQueue(){
            l.reverseQ();
        }
};

class Stack{
   private:
        Linked_list l;
   public:
      void pushS(int p){
         l.addAtStart(p);
      }
      void popS(){
         l.deleteAtStart();
      }
      void displayStack(){
         l.display();
      }
      void sizeStack(){
         cout<<"The size of Stack is:"<<l.getSize()<<endl;
      }
      void sFind(int s){
         l.findIndex(s);
      }
      void topPeek(){
         l.displayTopPeek();

      }

};
class Checkbracket{
        public:
          void file()
          {
            ifstream file;
            file.open("main.cpp");
            char c;
            int counter =0;
            while(file.eof()==0)
            {
                file>>c;

                if(c=='}' || c==')')
                    {
                        break;}
                 else if(c=='{' && c=='(')
                    {
                        counter++;
                    }
                 if(c=='}' && c==')')
                 {
                     counter--;

                 }

            }
            cout<<counter<<endl;
             if(counter==0)
             {

                 cout<<"properly Nested!"<<endl;
             }
             else

                cout<<"Not Properly Nested!"<<endl;

          }



};
int main()
{
    Node n(0);
    Linked_list l;
    Queue q;
    Stack st;
int s;
int w;
int condition=0;
int i;
int f;
int x;
int y;
  cout<<"Press 1 for Queue and Press 2 for Stack"<<endl;
  cin>>condition;
switch (condition){
   case 1:
       do {
  cout<<"------------MENU ~ QUEUE------------"<<endl;
  cout<<"press 1 to Enqueue"<<endl;
  cout<<"press 2 to Dequeue"<<endl;
  cout<<"press 3 to Front Peek"<<endl;
  cout<<"press 4 to Back Peek"<<endl;
  cout<<"press 5 to get the Size of Queue"<<endl;
  cout<<"press 6 to Find the Value"<<endl;
  cout<<"press 7 to Reverse the Queue"<<endl;
  cout<<"Press 8 to Display All Queue"<<endl;
    cin>>s;
  switch (s) {
    case 1:
    cout<<"Enter the value you want to Add"<<endl;
      cin>>x;
     q.enQueue(x);

     break;
  case 2:
      q.deQueue();
    break;
  case 3:
      q.frontPeek();

    break;
  case 4:
      q.backPeek();
    break;
  case 5:
      q.qSize();
    break;
  case 6:
  cout<<"Enter the Value to Find!"<<endl;
  cin>>y;
    q.qFind(y);
      break;
  case 7:
     q.reverseQueue();
     break;

  case 8:
    q.displayAll();
        break;
   case 9:
      condition=2;
  break;
  default:
  cout<<"Unkown Command!!!"<<endl;
    break;
}
cout<<"If you want to close the program press 0 otherwise press 1!"<<endl;
cin>>s;
}while(s!=0);
            break;
  case 2:
     do {
  cout<<"------------MENU ~ STACK------------"<<endl;
  cout<<"press 1 to Push"<<endl;
  cout<<"press 2 to Pop"<<endl;
  cout<<"press 3 to Top Peek"<<endl;
  cout<<"press 4 to Get the Size Of Stack"<<endl;
  cout<<"press 5 to Find the Value"<<endl;
  cout<<"Press 6 to Display all Stack"<<endl;
cin>>w;
  switch (w) {
    case 1:
    cout<<"Enter the value you want to Add"<<endl;
      cin>>i;
        st.pushS(i);

     break;
  case 2:
       st.popS();
    break;
  case 3:
      st.topPeek();

    break;
  case 4:
      st.sizeStack();
    break;
  case 5:
      cout<<"Enter the Value to Find!"<<endl;
      cin>>f;
      st.sFind(f);
    break;
  case 6:
       st.displayStack();
      break;
  default:
  cout<<"Unkown Command!!!"<<endl;
    break;
}
cout<<"If you want to close the program press 0 otherwise press 1!"<<endl;
cin>>w;
}while(w!=0);


}



    return (0);
}



