#include<iostream>
using namespace std;
class node 
{
public:
    int num;
    node * next;
    node()
    {
        next = NULL;
    }
    node(int n)
    {
        num = n;
        next = NULL;
    }
};
class list
{
    node *head;
    node *prev;
    public:
    list()
    {
        head = NULL;
        prev = NULL;
    }
    int insert(int n)
    {
        node *temp= new node(n);
        if (prev == NULL)
        {
            
            head = temp;
            prev = head;
        }
        else
        {
            prev->next = temp;
            prev = prev->next;
        }
    }
    bool Delete(int n)
    {
        node *temp = head;
        bool isLast = false;
        node *t;
        while (temp!=NULL)
        {
            if (temp->num == n)
            {
                node *nextNode = temp->next;
                if (nextNode == NULL)
                    {
                        isLast = true;
                        t = temp;
                    }
                else
                {
                    temp->num = nextNode->num;
                    temp->next = nextNode->next;
                    free(nextNode);
                    return true;
                }
               
            }
            temp = temp->next;
        }
        if (isLast)
        {
            node* temp = head;
            while(temp->next->next != NULL)
                temp = temp->next;
            temp->next = NULL;
            // free(t);
            return true;

        }
        return false;
    }
    void display(){
        node *temp = head;
        while (temp->next!=NULL)
        {
            cout<<temp->num<<"->";
            temp = temp->next;
        }
        cout<<temp->num<<endl;
    }

};
int main()
{
    list l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.insert(4);
    l.insert(5);
    l.insert(6);
    l.insert(7);
    l.insert(8);
    l.insert(9);
    l.display();
    cout<<l.Delete(3)<<endl;
    l.display();
    cout<<l.Delete(1)<<endl;
    l.display();
    cout<<l.Delete(9)<<endl;
    l.display();
    return 0;
}