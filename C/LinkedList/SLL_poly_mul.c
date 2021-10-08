/*Take 2 polynomials as input from the user 
and store them using singly linked lists. 
Display the resultant polynomial after multiplication.
Try to make it memory efficient*/

#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (((a)>(b))?(a):(b))
/*structure for a node of single linked list which contains 
coefficient and exponent as data part & a pointer which points to the next node*/
struct node{
    int coeff;//coefficient
    int expo;//exponent
    struct node* next;//struct node type pointer
};
//function to create a node
struct node* create_node()
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    
    scanf("%d%d",&temp->coeff,&temp->expo);
    temp->next=NULL;
    return temp;
}
int main(void)
{
    int n=1,i,j,x=0,k;
    struct node* head=NULL,*temp,*change,*ptr,*ptr1,*temp1;
    int a[2];
    //for loop to take 2 polynomials as input
    for(i=1;i<=2;i++)
    {
        int numOfTerms;
        /*Here, the polynomial with more number of terms is taken as input first and stored in the list.
        This is done to make it more memory efficient. By doing so we can store the resultant polynomial
        in the place where the 1st polynomial was stored as its job is done after multiplication.
        */
        if(i==1)
        {
            printf("Enter the number of terms of polynomial with more number of terms first.\n");
            scanf("%d",&numOfTerms);
        }
        if(i==2)
        {
            printf("Enter the number of terms of polynomial with lesser number of terms\n");
            scanf("%d",&numOfTerms);
        }
        
        printf("Enter the coefficients and exponents respectively of the polynomial\n");
        
        //Here the single list is created - 1st the longer polynomial is stored and then the shorter one
        for(j=1;j<=numOfTerms;j++)
        {
            temp=create_node();
            if(head==NULL)
            {
                head=temp;
                change=temp;
            }
            else
            {
                change->next=temp;
                change=temp;
            }
                
        }
        
        a[i-1]=numOfTerms;
        
    }
    
    change=head;temp=head;
    ptr=head;temp1=head;
	//
    for(j=0;j<a[0]+a[1]-1;j++)
    {
        ptr=ptr->next;
    }
    for(j=0;j<a[0]-1;j++)
    {
        temp=temp->next;
        temp1=temp1->next;
    }
    
    for(j=0;j<a[0];j++)
    {
        if(j==a[0]-1)
        {
            temp=temp1;
        }
        if(j>0)
            change=change->next;
        for(k=a[0];k<a[0]+a[1];k++)
        {
            temp=temp->next;
            if(change->coeff>0&&temp->coeff>0&&j!=a[0]-1)
            {
                ptr1=(struct node*)malloc(sizeof(struct node));
                ptr1->coeff = (change->coeff)*(temp->coeff);
                ptr1->expo  =change->expo+temp->expo;
                ptr1->next=NULL;
                ptr->next=ptr1;
                ptr=ptr1;
                
            }
            else if(change->coeff>0&&temp->coeff>0&&j==a[0]-1)
            {
                temp->coeff=change->coeff*temp->coeff;
                temp->expo=change->expo+temp->expo;
                temp=temp->next;
                
            }
            
            
        }
        
        temp=temp1;
        
    }
    change=head;temp=head;
    for(j=0;j<a[0];j++)
    {
        change=change->next;
    }
    temp=change->next;
    while(change!=NULL)
    {
        while(temp!=NULL)
        {
            if(change->coeff>0&&temp->coeff>0&&change->expo==temp->expo)
            {
                change->coeff+=temp->coeff;
                temp->coeff=0;
            }
            
            temp=temp->next;
        }
        
        change=change->next;
	    if(change!=NULL)
            temp=change->next;
    }
    change=head;temp=head;
    for(j=0;j<a[0];j++)
    {
        change=change->next;
	   if(j!=0)
	       temp=temp->next;
    }
	head=change;
	temp->next=NULL;
	free(temp);
    while(change!=NULL)
    {
        if(change->coeff>0)
        {
            printf(" + %dx^%d",change->coeff,change->expo);
        }
        
        change=change->next;
    }
	free(change);
	
    return 0;
}

 