#include<bits/stdc++.h>
using namespace std;
struct Node{

    float data;
    Node* next;

};
void selectionSort(Node* head)
{
    Node* temp = head;

    while (temp)
        {
        Node* m = temp;
        Node* r = temp->next;

        while (r) {
            if (m->data > r->data)
                m = r;

            r = r->next;
        }

        // Swap Data
        float x = temp->data;
        temp->data = m->data;
        m->data = x;
        temp = temp->next;
    }
}
void bucket_sort(float arr[],int n)
{
    Node* bucket[n]={NULL};
    for (int i = 0; i < n; i++) {
        int bi = n * arr[i];
        //cout<<bi<<" ";
        Node* newnode =new Node();
        newnode->data = arr[i];
        newnode->next = NULL;
        if(bucket[bi] == NULL)
            bucket[bi] = newnode;
        else
        {
            Node* temp = bucket[bi];
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }

    for(int i=0;i<n;i++)
    {
        selectionSort(bucket[i]);

    }
    int ct=0;
    for(int i=0;i<n;i++)
    {
        while(bucket[i]!=NULL)
        {
            arr[ct]=bucket[i]->data;
            ct++;
            bucket[i] = bucket[i]->next;
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    float arr[] = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;
    bucket_sort(arr, n);
    return 0;
}
