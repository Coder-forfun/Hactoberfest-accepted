typedef struct node{
	int data;
	struct node *nextAddress;
} Node;

void insert(Node **list, int no);
void insert(Node **list, int no)
{
	Node *newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = no;
	newNode->nextAddress = NULL;
	if((*list) == NULL)
	{
		(*list) = newNode;
	}
	else
	{
		while((*list)->nextAddress!=NULL)
		{
			(*list) = (*list)->nextAddress;
		}
		(*list)->nextAddress = newNode;
	}
}
