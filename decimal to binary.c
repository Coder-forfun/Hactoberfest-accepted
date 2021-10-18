#include<stdio.h>    
int main()
{  
int a[15],n,i,j;     
printf("Enter the number: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    
{    
a[i]=n%2;    
n=n/2;    
}    
printf("Binary equivalent of given number  is : ");    
for(j=i-1;j>=0;j--)    
{    
printf("%d",a[j]);    
}    
return 0;  
}   
