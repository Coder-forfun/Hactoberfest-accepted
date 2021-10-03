//implementation of stack in c

#include<stdio.h>
#define MAX 5
int stack[MAX]; //Global Data
int top=-1;

int item,i;

void main()  //main function
{
 int ch;
 do    //display menu
 {
 printf("\n________________________________________________________________\n");
 printf("\n@@@@@... SELECT ...@@@@@\n");
 printf("\n-->1 PUSH\n-->2 POP\n-->3 DISPLAY\n-->4 EXIT");
  printf("\n________________________________________________________________\n");
 printf("\n->YOUR CHOICE.....? ");
 scanf("%d",&ch);
 switch(ch)
 {

 case 1:   //case 1 for push

 if(top==MAX-1)      //check condition
 printf("\n STACK OVERFLOW");
 else
 {
 printf("\nEnter the number you want to PUSH ");
 scanf("%d",&item);
 top=top+1;    //increase the top
 stack[top]=item;
 printf("\n%d is pushed onto stack",item);
 }

 break;


 case 2:  //case 2 for pop

 if(top==-1)     //check condition
 printf("\n STACK UNDERFLOW");
 else
 {
 item = stack[top];
 top=top-1;   //decrease the top
 printf("\n%d is popped from stack ",item);
 }

 break;


 case 3:  //case 3 for display

 if(top==-1)    //check condition
 printf("\nStack is empty ");
 else
 {
 printf("\nStack is-->\n\t");
 for(i=top;i>=0;i--)
 {
 printf("%d\n\t",stack[i]);
 }
 }

 break;


 case 4:  //Exit case

     break;

 default : printf("\n ...SORRY...\nWrong Choice ");
 }

 }while(ch!=4);

 printf("\nThank You....!");
} // end of main
//END OF PROGRAM
