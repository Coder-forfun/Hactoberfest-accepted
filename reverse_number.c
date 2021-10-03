

#include <stdio.h>

int main()
{
    int n,nn,rem,sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    nn=n;
    while(nn!=0)
    {
        rem=nn%10;
        sum=sum*10+rem;
        nn=nn/10;
    }
    printf("The reversed number is : %d",sum);
    return 0;
}
