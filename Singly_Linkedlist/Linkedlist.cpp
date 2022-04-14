#include<iostream>
using namespace std;
#include "Node.cpp"

Node* delNode(Node* head, int pos)
{
    if(pos == 0)
    {
        head = head -> next;
        return head;
    }
    
    else {
        Node* temp = head;
        int count = 0;
        
        while(count != pos - 1 && temp!=NULL)
        {
            temp = temp->next;
            count++;
        }
        Node* temp2 = temp->next;
        temp -> next = temp2 -> next;
        return head;
    }
}

Node* takeInput_Better()
{
    int data;
    cin>> data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1)
    {
        Node *newNode = new Node(data);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail -> next = newNode;
            tail = tail -> next;
        }

        cin>> data;
    }
    return head;
}


void print(Node *head) {
    Node *temp = head;

    while(temp!=NULL)
    {
        cout<< temp->data << " ";
        temp = temp->next;
    }

    
    // temp = head;
    // while(temp!=NULL)
    // {
    //     cout<< temp->data << " ";
    //     temp = temp->next;
    // }

}

Node* insertNode(Node* head, int data, int pos)
{
    Node* newNode = new Node(data);
    int count = 0;
    Node* temp = head;

    if(pos == 0)
    {
        newNode -> next = head;
        head = newNode;
        return head;
    }
    
    while(temp!= NULL && count < pos - 1)
    {
        temp = temp -> next;
        count++;
    }
    if(temp != NULL)
    newNode -> next = temp ->next;
    temp->next = newNode;
    return head;
}

int lengthOfLinkedList(Node* head)
{
    Node* temp = head;
    if(temp == NULL) return 0;
    if(temp->next == NULL)
    {
        return 1;
    }
    temp = temp->next;
    int smallOutput = lengthOfLinkedList(temp);
    return smallOutput + 1;
}


int middleOfLinkedList(Node* head)
{
    int length = lengthOfLinkedList(head);
    int mid = length / 2;
    int count = 0;
    Node* temp = head;

    while(count < mid - 1)
    {
        temp = temp -> next;
        count++;
    }
    if(length%2 != 0)
    {
        temp = temp -> next;
        return temp->data;
    }
    else {
        return temp -> data;
    }

}

int main()
{
    int choice;
    int value, position;

    cout<< "Enter the linked list with -1 as terminator"<<endl;
    Node *head = takeInput_Better();



    cout<< "Select your choice: \n"<<endl;
    cout<<" 1.insert \n 2.delete \n 3.print \n 4.length \n 5.Middle of the list  \n 6.Exit"<<endl;
    cout<< "\n\n \t Positioning starts from 0 in Linked list \n\n"<<endl;

    do{
        cout<<"\n Enter the Choice: ";
        cin>> choice;

        switch(choice)
        {
            case 1:
            {
                cout<<" Enter the value to be inserted: ";
                cin>> value;
                cout<< " Enter the postition: ";
                cin>> position;
                head = insertNode(head, value, position);
                break;
            }
            case 2:
            {
                cout<< " Enter the position: ";
                cin>>position;
                head = delNode(head, position);
                break;
            }
            case 3:
            {
                cout<<" ";
                print(head);
                break;
            }
            case 4:
            {
                cout<< " Length of the linked list : "<< lengthOfLinkedList(head);
                break;
            }

            case 5:
            {
                cout<< " Element at the middle: "<< middleOfLinkedList(head);
                break;
            }
            case 6:
            {
                cout<<"EXIT!"<<endl;
                break;
            }
            default:
            {
                cout<< "\n Please Enter a Valid Choice(1/2/3/4/5/6)";
            }
                
        }
    }
    while(choice!=6);
    

    //statically creating linked list
    
    // Node n1(1);

    // Node *head = &n1;
    // Node n2(2);
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);

    // n1.next = &n2;
    // n2.next = &n3;
    // n3.next = &n4;
    // n4.next = &n5;

    // print(head);

    // print(head);
    

    // n1.next = &n2;
    
    // cout<< n1.data <<" " << n2.data << endl;

    // //Dyanmically 
    // Node *n3 = new Node(10);
    // Node *head = n3;
    // Node *n4 = new Node(20);
    // n3 -> next = n4;
     
}