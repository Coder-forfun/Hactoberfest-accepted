#include <stdio.h>
#include <stdlib.h>
int n;

struct Node
     {
        struct Node *lchild;
        int data;
        struct Node *rchild;
     }*root1=NULL;
     
struct Queue
    {
        int size;
        int front;
        int rear;
        struct Node **Q;
     };
     
void create(struct Queue *q,int size)
    {
         q->size=size;
         q->front=q->rear=0;
         q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
     }
     
void enqueue(struct Queue *q,struct Node *x)
{
         if((q->rear+1)%q->size==q->front)
             printf("Queue is Full");
         else
             {
                q->rear=(q->rear+1)%q->size;
                q->Q[q->rear]=x;
              }
}

struct Node * dequeue(struct Queue *q)
{
        struct Node* x=NULL;
         if(q->front==q->rear)
            printf("Queue is Empty\n");
         else
             {
                 q->front=(q->front+1)%q->size;
                  x=q->Q[q->front];
             }
    return x;
}

int isEmpty(struct Queue q)
      {
           return q.front==q.rear;
      }

struct Node *root=NULL;

void Treecreate(int bstarr[])
{
      struct Node *p,*t;
       int x,i=1;
      struct Queue q;
      create(&q,100);
      printf("Eneter root value ");
      scanf("%d",&x);
      bstarr[0]=x;
      root=(struct Node *)malloc(sizeof(struct Node));
      root->data=x;
      root->lchild=root->rchild=NULL;
      enqueue(&q,root);
      while(!isEmpty(q))
         {
             p=dequeue(&q);
             printf("eneter left child of %d ",p->data);
             scanf("%d",&x);
             if(x!=-1)
                {
                    t=(struct Node *)malloc(sizeof(struct Node));
                    t->data=x;
                    bstarr[i++]=x;
                    t->lchild=t->rchild=NULL;
                    p->lchild=t;
                    enqueue(&q,t);
                 }
             printf("eneter right child of %d ",p->data);
             scanf("%d",&x);
          if(x!=-1)
            {
                t=(struct Node *)malloc(sizeof(struct Node));
                t->data=x;
                bstarr[i++]=x;
                t->lchild=t->rchild=NULL;
               p->rchild=t;
               enqueue(&q,t);
            }
     }
}

void Insert(int key)
{
    struct Node *t=root1;
    struct Node *r=NULL,*p;
    if(root1==NULL)
     {
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root1=p;
        return;
     }
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
            t=t->lchild;
        else if(key>t->data)
            t=t->rchild;
        else  return;
    }
    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(key<r->data) r->lchild=p;
    else r->rchild=p;
}

int Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

int main()
{
    int i;
    printf("Input -1 if no element in left or right child\n");
    printf("Enter total Nodes in your Tree: ");
    scanf("%d",&n);
    int bstarr[n];
    Treecreate(bstarr);
    printf("Stored tree is: ");
    for(i=0;i<n;i++)
    printf("%d ",bstarr[i]);
    for(i=0;i<n;i++)
      Insert(bstarr[i]);
    printf("\nBinary Tree is Converted to BST\n");
    printf("Inorder Traversal of BST is:  ");
    Inorder(root1);
    return 0;
}