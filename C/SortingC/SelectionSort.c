#include <stdio.h>
int smallestPos(int *arr, int n, int i)
{
	int small = *(arr+i);
	int pos = i;
	int k;
	for(k=i;k<n;k=k+1)
	{
		if(small > *(arr+k))
		{
			small = *(arr+k);
			pos = k;
		}
	}
	return pos;
}
void selection(int *arr, int n)
{
	int temp = 0;
	int i;
	for(i=0;i<n;i=i+1)
	{
		int pos = smallestPos(arr,n,i);
		temp = *(arr+i);
		*(arr+i) = *(arr+pos);
		*(arr+pos) = temp;
	}
}
int main()
{
	printf("Selection Sort\n");
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
	selection(arr,n);
	printf("Sorted in Ascending Order : \n");
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
}