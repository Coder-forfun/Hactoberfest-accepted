#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node{
	int data;
	struct node *next;
};
	struct node *head,*newnode,*temp;
	head=0;
	int choice=1;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data :");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Do you want to add data(0/1)?? ");
		scanf("%d",&choice);
	}
	temp=head;
	while(temp!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	return 0;
}
/*
linkedlist:
linkedlist are linear data struture similar to array but values in linkedlist are stored using pointers.
Example
INPUT
Enter Data :3
Do you want to add data(0/1)?? 1
Enter Data :4
Do you want to add data(0/1)?? 1
Enter Data :5
Do you want to add data(0/1)?? 1
Enter Data :7
Do you want to add data(0/1)?? 0

OUTPUT
3 4 5 7
*