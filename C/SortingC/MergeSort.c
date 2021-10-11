#include <stdio.h>
void merge(int *arr, int beg, int mid, int end)
{
	int i=beg, j=mid+1, index=beg, temp[100], k;
	while(i<=mid && j<=end)
	{
		if(*(arr+i) < *(arr+j))
		{
			temp[index] = *(arr+i);
			i++;
		}
		else
		{
			temp[index] = *(arr+j);
			j++;
		}
		index++;
	}
	if(i>mid)
	{
		while(j<=end)
		{
			temp[index] = *(arr+j);
			j++;
			index++;
		}
	}
	else
	{
		while(i<=mid)
		{
			temp[index] = *(arr+i);
			i++;
			index++;
		}
	}
	for(k=beg;k<index;k++)
	{
		*(arr+k) = temp[k];
	}
}
void sort(int *arr, int beg, int end)
{
	if(beg<end)
	{
		int mid = (beg+end)/2;
		sort(arr,beg,mid);
		sort(arr,mid+1,end);
		merge(arr,beg,mid,end); 
	}
}
int main()
{
	printf("Merge Sort\n");
	printf("**********\n\n");
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
	sort(arr,0,n-1);
	printf("Sorted in Ascending Order : \n");
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
}