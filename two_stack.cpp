//program to implement two stacks.

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int stack[10];
int back_up_stack[15];
int TOP = 1;
int BTOP = 1;

void push_operation()
{
    int a;
    if(TOP==11)
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        printf("ENTER THE ELEMENT WHICH YOU WANT TO PUSH :");
        scanf("%d",&a);
        TOP++;
        stack[TOP] = a;
    }
}

void pop_operation()
{
    if(TOP==1)
    {
        printf("\nSTACK UNDERFLOW\n");
    }
    else
    {
        printf("\nTOP ELEMENT %d IS REMOVED FROM THE STACK\n",stack[TOP]);
        back_up_stack[BTOP] = stack[TOP];
        BTOP++;
        TOP--;
    }
}

void display_operation()
{
    int i;
    if(TOP==1)
    {
        printf("\nSTACKIS EMPTY, NOTHING TO DISPLAY\n");
    }
    else
    {
        printf("\nSTACK CONTAINS:\n");
        for(i=TOP;i>1;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

void undo_operation()
{
    stack[TOP] = back_up_stack[BTOP];
    BTOP--;
    printf("\nUNDO ELEMENT IS %d ",back_up_stack[BTOP]);
    TOP++;
    BTOP--;
}

void redo_operation()
{

}

int main()
{
    int ch;
	do
	{
		printf("\n1 - PUSH\n");
		printf("2 - POP\n");
		printf("3 - DISPLAY\n");
		printf("4 - UNDO\n");
		printf("5 - REDO\n");
		printf("6 - EXIT\n");

		printf("\nPROVIDE YOUR CHOICE :");
		scanf("%d",&ch);

		switch(ch)
		{
		    case 1: push_operation();
		    break;

		    case 2: pop_operation();
		    break;

		    case 3: display_operation();
		    break;

		    case 4: undo_operation();
		    break;

		    case 5: redo_operation();
		    break;

		    case 6: exit(0);
		    break;

		    default: printf("\n INVALID CHOICE \n");
		}

	}while(1);

	return 0;
}

