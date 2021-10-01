#include <stdio.h>
int partition(int *arr, int beg, int end)
{
	int left = beg;
	int loc = beg;
	int right = end;
	int flag = 0;
	int temp=0;
	while(flag != 1)
	{
		if(*(arr+loc) <= *(arr+right) && loc != right)
		{
			right = right - 1;
			if(loc==right)
			{
				flag=1;
				continue;
			}
		}
		else if(*(arr+loc) > *(arr+right))
		{
			temp = *(arr+loc);
			*(arr+loc) = *(arr+right);
			*(arr+right) = temp;
			loc = right;
		}
		if(*(arr+loc) >= *(arr+left) && loc != left)
		{
			left = left + 1;
			if(loc==left)
			{
				flag=1;
				continue;
			}
		}
		else if(*(arr+loc) < *(arr+left))
		{
			temp = *(arr+loc);
			*(arr+loc) = *(arr+left);
			*(arr+left) = temp;
			loc = left;
		}
	}
	return loc;
}
void sort(int *arr, int beg, int end)
{
	if(beg<end)
	{
		int loc = partition(arr,beg,end);
		sort(arr,beg,loc);
		sort(arr,loc+1,end);
	}
}
int main()
{
	printf("Quick Sort\n");
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