#include<stdio.h>
void main()
{
	int x,y,a;
	int gcd(int x,int y);
	printf("Enter any two numbers");
	scanf("%d\t%d",&x,&y);
	a=gcd(x,y);
	printf("The GCD of %d and %d is %d",x,y,a);
}
int gcd(int x,int y)
{
	if(y!=0)
	{
		return gcd(y,x%y);
	}
	else
	 return x;
}
