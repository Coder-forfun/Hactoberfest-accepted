#include<stdio.h>
#include<stdlib.h>
void main()
{
int a[10][10],b[10][10],mul[10][10],r,c,r1,c1;
printf("enter the number of row and column of 1st =");
scanf("%d%d",&r,&c);
printf("enter the number of column=");
scanf("%d%d",&r1,&c1);
if(c==r1)
{
printf("enter the first matrix element=\n");
for(int i=0;i<r;i++)
{
   for(int j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
      }
}
printf("enter the second matrix element=\n");
for(int i=0;i<r1;i++)
{
  for(int j=0;j<c1;j++)
   {
       scanf("%d",&b[i][j]);
     }
 }

printf("multiply of the matrix=\n");
for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
       mul[i][j]=0;
        for(int k=0;k<c;k++)
           {
             mul[i][j]+=a[i][k]*b[k][j];
             }
     }
  }

for(int i=0;i<r;i++)
{
  for(int j=0;j<c;j++)
   {
     printf("%d\t",mul[i][j]);
    }
printf("\n");
}
}
else
printf("ERROR");
}
