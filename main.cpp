
#include <iostream>

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
        if(temp!=NULL)
       {

        first=temp->getNext();
        first->setPrev(t);
       }
    else
        cout<<"NO DATA!"<<endl;
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
else
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
};

int main()
{
    Node n(0);
    Linked_list l;
int s;
int w;

l.addAtStart(9);
l.addAtEnd(2);
l.addAtEnd(7);
l.addAtStart(33);
l.display();
l.findEnd(2);


int i=0;
int x;
int ind=0;
int c=0;
int f=0;
int indx;
int vale;
int y;
do {
  cout<<"------------MENU~LINKED_LIST------------"<<endl;
  cout<<"press 1 to ADD at Start"<<endl;
  cout<<"press 2 to Add at End"<<endl;
  cout<<"press 3 to Delete at Start"<<endl;
  cout<<"press 4 to Delete at End"<<endl;
  cout<<"press 5 to Delete at Specific index"<<endl;
  cout<<"press 6 to Get the Size of List"<<endl;
  cout<<"press 7 to Add the Value at any Index"<<endl;
  cout<<"Press 8 to Find any Index By Value"<<endl;
  cout<<"Press 9 to Find any Value By Index"<<endl;
  cout<<"Press 10 to Remove the Value from the List"<<endl;
  cout<<"Press 11 to Display the List!"<<endl;
cin>>s;
  switch (s) {
    case 1:
    cout<<"Enter the value you want to add at start!"<<endl;
      cin>>x;
    l.addAtStart(x);

     break;
  case 2:

  cout<<"Enter the value you want to add at the End!"<<endl;
  cin>>y;
  l.addAtEnd(y);
    break;
  case 3:
l.deleteAtStart();

    break;
  case 4:
  l.deleteAtEnd();
    break;
  case 5:

  cout<<"Enter the index "<<endl;
  cin>>i;
    l.removeAt(i);
    break;
  case 6:
  cout<<"The size of your list is:"<<l.getSize()<<endl;

      break;
  case 7:

   cout<<"Enter the endex no. "<<endl;
   cin>>indx;
   cout<<"Enter the value to store"<<endl;
   cin>>vale;
   l.addAtIndex(indx,vale);
     break;
  case 8:
  cout<<"Enter the value of the you want to find"<<endl;
  cin>>c;
  l.findIndex(c);

    break;
  case 9:

    cout<<"Enter the Index NO. "<<endl;
    cin>>indx;
    l.findValue(indx);
  break;
  case 10:

  cout<<"Enter the Value you want to remove"<<endl;
  cin>>f;
  l.sameVal(f);

  break;
  case 11:

  l.display();
  break;
  default:
  cout<<"Unkown Command!!!"<<endl;
    break;
}
cout<<"If you want to close the program press 0 otherwise press 1!"<<endl;
cin>>s;
}while(s!=0);

    return (0);
}



