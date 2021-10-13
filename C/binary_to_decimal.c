
#include <stdio.h>
#include <math.h>

int main()
{
int i=0,dec=0,num,rem;
scanf("%d",&num);
while(num)
{
    rem=num%10;
    dec=dec+rem*pow(2,i);
    num=num/10;
    i++;
}
printf("%d",dec);
    return 0;
}

