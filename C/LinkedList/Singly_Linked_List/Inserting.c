#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node *start=NULL;

int sizeOfList()
{
	Node *ptr;
	ptr = start;
	int count=0;
	while(ptr != NULL)
	{
		count = count + 1;
		ptr = ptr->nextAddress;
	}
	return count;
}
void insertBeg(int no)
{
	Node *newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = no;
	newNode->nextAddress = start;
	start = newNode;
}
void insertPos(int no, int pos)
{
	Node *ptr;
	ptr = start;
	int count=1;
	while(ptr != NULL)
	{
		count = count + 1;
		if(count==pos)
		{
			Node *newNode;
			newNode = (Node *)malloc(sizeof(Node));
			newNode->data = no;
			newNode->nextAddress = ptr->nextAddress;
			ptr->nextAddress = newNode;
		}
		ptr = ptr->nextAddress;
	}
}
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
	printf("Inserting & Traversing\n");
	printf("**********************\n\n");
	int no,pos;
	int choice;
	printf("1: Add\n2: Insert\n3: Display\n0: No\n\n");
	while(1)
	{
		printf("Enter Choice : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Enter Number : ");
			scanf("%d",&no);
			printf("\n");
			insert(&start, no);
		}
		else if(choice==2)
		{
			printf("Enter Number   : ");
			scanf("%d",&no);
			while(1)
			{
				printf("Enter Position : ");
				scanf("%d",&pos);

				int size = sizeOfList();
				if(pos==1)
				{
					insertBeg(no);
					break;
				}
				else if(pos==size+1)
				{
					insert(&start, no);
					break;
				}
				else if(pos>size || pos<1)
				{
					continue;
				}
				else
				{
					insertPos(no,pos);
					break;
				}
			}
			printf("\n");
		}
		else if(choice==3)
		{
			display();
			printf("\n\n");
		}
		else if(choice==0)
		{
			break;
		}
	}
}
