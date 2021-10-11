#include <stdio.h>
int search(int *arr, int n, int no)
{
	int beg = 0;
	int end = n-1;
	int pos = -1;
	while(beg <= end)
	{
		int mid = beg + (end-beg) * ((no-*(arr+beg)) / (*(arr+end) - *(arr+beg)));
		if(no == *(arr+mid))
		{
			pos=mid;
			break;
		}
		else if(no < *(arr+mid))
		{
			end = mid - 1;
		} 
		else if(no > *(arr+mid))
		{
			beg = mid + 1;
		}
	}
	return pos;
}
int main()
{
	printf("Interpolation Search\n");
	printf("********************\n\n");
	int arr[100];
	int n,i,no;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	printf("\n");
	printf("Enter Numbers : \n");
	for(i=0;i<n;i=i+1)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	printf("Enter Number to be Searched : ");
	scanf("%d",&no);
	printf("\n");
	int pos = search(arr,n,no);
	if(pos==-1)
	{
		printf("Number is Not Present in Array\n");
	}
	else
	{
		printf("Number Found in Position %d\n",(pos+1));
	}
}