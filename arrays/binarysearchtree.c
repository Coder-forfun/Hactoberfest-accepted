#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    char data;
    struct node *left, *right;
} node;

  void inr(node* p) 
{
    if (p == NULL) 
        return;
    else {
        inr(p->left);
        printf("%c ", p->data);
        inr(p->right);
    }
}

char* add(node** p, char* a)
{
  
    printf("   ");
    if (*a == ('\0'))
    {
        return ('\0');
    }
    printf(" ");
    while (1) 
    {
        char* q = "null";
        if (*p == NULL) 
        {
  
            printf("   ");
            node* nn = (node*)malloc(sizeof(node));
            nn->data = *a;
            printf(" ");
            nn->left = NULL;
            printf("  ");
            nn->right = NULL;
            printf(" ");
            *p = nn;
        }
        else 
        {
            printf(" ");          
            if (*a >= ('a') && *a <= ('z')) 
            {
                return a;
                printf("   ");
            }
  
            printf(" ");
            q = add(&(*p)->left, (a + 1));
  
           
            q = add(&(*p)->right, (q + 1));
            
            return q;
             printf(" ");
        }
    }
}
void preorder(node* p)
{
     if(p == NULL)
     return;
     else{
         printf("%c ",p->data);
         preorder(p->left);
         preorder(p->right);
        }
}


void postr(node* p)
{
    if (p == NULL) {
        return;
    }
    else {
        postr(p->left);
        postr(p->right);
        printf("%c ", p->data);
    }
}
int main()
{
    node* s = NULL;
    printf(" \n");
    printf("Expression used is:\n");
    printf("* + a b - / c d + e * g  \n");
    char a[] = "*+ab-/cd+e*g";
    add(&s, a);
    printf(" \n");
    printf("Infix expression is:\n");
    inr(s);
    printf("\n");
    printf(" \n");
    printf("Postfix expression is:\n");
    postr(s);
    printf("\n");
    printf(" \n");
    printf("Prefix expression is:\n");
    preorder(s);
    printf(" \n");
    printf(" \n");

    return 0;
}//End of main
