#include <stdio.h>
#include <math.h>

int main()
{
int bin=0,i=0,rem,num;
scanf("%d",&num);
while(num)
{
    rem=num%2;
    bin=bin+rem*pow(10,i);
    num=num/2;
    i++;
}
printf("%d",bin);
    return 0;
}

