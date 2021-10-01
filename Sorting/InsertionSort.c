#include <stdio.h>
void insertion(int *arr, int n)
{
	int k,j,temp=0;
	for(k=1;k<n;k=k+1)
	{
		temp = *(arr+k);
		j = k - 1;
		while(temp<*(arr+j) && j>=0)
		{
			*(arr+j+1) = *(arr+j);
			j--;
		}
		*(arr+j+1) = temp;
	}
}
int main()
{
	printf("Insertion Sort\n");
	printf("**************\n\n");
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
	insertion(arr,n);
	printf("Number Sorted in Ascending Order : \n");
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
}