#include <stdio.h>
#include <stdlib.h>
 
// A Linked List Node
struct Node
{
    int data;
    struct Node* next;
};
 
// Helper function to print a given linked list
void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL\n");
}
 
// Helper function to insert a new node at the beginning of the linked list
void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
 
// Function to construct a linked list by merging nodes of
// two given linked lists using a dummy node 
struct Node* shuffleMerge(struct Node* a, struct Node* b)
{
    struct Node dummy;
    struct Node* tail = &dummy;
    dummy.next = NULL;
 
    while (1)
    {
        // empty list cases
        if (a == NULL)
        {
            tail->next = b;
            break;
        }
 
        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
 
        // common case: move two nodes to the tail
        else {
            tail->next = a;
            tail = a;
            a = a->next;
 
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
 
    return dummy.next;
}
 
 
int main(void)
{
	int n,m,i,data1,data2,ch;
    // input keys
    
    while(1){
	
 
    struct Node *a = NULL, *b = NULL;
    printf("Enter no of elements in list 1\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for ( i =0; i < n; i++) {
    	scanf("%d",&data1);
        push(&a, data1);
    }
     printf("Enter no of elements in list 2\n");
    scanf("%d",&m);
    printf("Enter the elements\n");
    for (int i =0; i < m; i++) {
    	scanf("%d",&data2);
        push(&b, data2);
    }
 
    // print both lists
    printf("First List: ");
    printList(a);
 
    printf("Second List: ");
    printList(b);
 
    struct Node* head = shuffleMerge(a, b);
    printf("After Merge: ");
    printList(head);
    printf("\nTo continue press 1 else 0\n");
    scanf("%d",&ch);
    if(ch==0)
    exit(0);
}
    return 0;
}
