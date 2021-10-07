#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node *start = NULL;
void display()
{
	Node *ptr;
	ptr = start;
	printf("START->");
	while(ptr != NULL)
	{
		printf("%d->",ptr->data);
		ptr = ptr->nextAddress;
	}
	printf("END");
}
int main()
{
	printf("Traversing a Singly Linked List\n");
	printf("*******************************\n\n");
	printf("1: Insert\n2: Display\n0: No\n\n");
	int choice, no;
	while(1)
	{
		printf("Enter your Choice : ");
		scanf("%d",&choice);
		if(choice==0)
		{
			printf("\n");
			break;
		}
		else if(choice==1)
		{
			printf("Enter Number : ");
			scanf("%d",&no);
			printf("\n");
			insert(&start, no);
		}
		else if(choice==2)
		{
			display();
			printf("\n\n");
		}
	}
}
