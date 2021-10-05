#include <stdio.h>
#include <stdlib.h>
#define max 100

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *top = NULL;

void push(int count)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to be Entered : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (top == NULL)
    {
        top = newnode;
        head = newnode;
    }

    else if(count==max)
    {
        printf("Stack Full");
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Empty Stack");
    }
    else
    {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp = top;
        printf("%d", temp->data);
        top = temp->next;
        printf("\n");
    }
}

void peek()
{
    printf("Top Element: %d\n",top->data);
}


int main()
{
    int n;
    int count=0;
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Exit\n");
    
    scanf("%d",&n);
    do
    {
        
        switch (n)
        {
        case 1:
        count++;
        push(count);
        break;
        
        case 2:
        pop();
        break;

        case 3:
        peek();
        break;
        
        default:
        break;
        }
        printf("\nEnter 4 to exit or Choose operation : ");
        scanf("%d",&n);
    } while (n!=4);
    
    return 0;
}