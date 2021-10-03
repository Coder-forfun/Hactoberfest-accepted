#include <stdio.h>
int bubble(int *arr, int n)
{
	int i,j,temp=0,flag=0;
	for(i=0;i<n;i=i+1)
	{
		for(j=0;j<n-i-1;j=j+1)
		{
			if(*(arr+j) > *(arr+j+1))
			{
				flag=1;
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
		if(flag==0)
		{
			return flag;
		}
	}
}
int main()
{
	printf("Bubble Sort\n");
	printf("***********\n\n");
	int arr[100];
	int n,i;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter Numbers : \n");
	for(i=0;i<n;i=i+1)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	int flag = bubble(arr,n);
	if(flag==0)
	{
		printf("Array is Already Sorted\n");
	}
	else
	{
		printf("Sorted in Ascending Order : \n");
		for(i=0;i<n;i=i+1)
		{
			printf("%d\n",arr[i]);
		}
		return 0;
	}
}