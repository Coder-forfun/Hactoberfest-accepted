#include <stdio.h>
int findPlaceValue(int *arr, int j, int k)
{
	int r;
	int no = *(arr+j);
	while(k > 0)
	{
		r = no%10;
		no = no/10;;
		k--;
	}
	return r;
}
void sort(int *arr, int n, int k)
{
	int count[10] = {0,0,0,0,0,0,0,0,0,0};
	int updated_count[10];
	int i,j;
	int temp_arr[100];
	for(i=0;i<=9;i=i+1)
	{
		for(j=0;j<n;j=j+1)
		{
			int placeValue = findPlaceValue(arr,j,k);
			if(i == placeValue)
			{
				count[i] = count[i] + 1;
			}
		}
	}
	updated_count[0] = count[0];
	for(i=1;i<=9;i=i+1)
	{
		updated_count[i] = updated_count[i-1] + count[i];
	}
	for(i=0;i<n;i=i+1)
	{
		temp_arr[i] = *(arr+i);
	}
	for(i=(n-1);i>=0;i--)
	{
		int placeValue = findPlaceValue(temp_arr,i,k);
		updated_count[placeValue] = updated_count[placeValue] - 1;
		*(arr+updated_count[placeValue]) = temp_arr[i];
	}
}
int digitCount(int no)
{
	int count=0;
	while(no>0)
	{
		count = count + 1;
		no = no/10;
	}
	return count;
}
int largest(int *arr, int n)
{
	int max=0,i;
	for(i=0;i<n;i=i+1)
	{
		if(max < *(arr+i))
		{
			max = *(arr+i);
		}
	}
	return max;
}
int main()
{
	printf("Radix Sort\n");
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
	int largeNo = largest(arr,n);
	int noOfDigit = digitCount(largeNo);
	int k = 1;
	while(k <= noOfDigit)
	{
		sort(arr,n,k);
		k++;
	}
	printf("Sorted in Ascending Order : \n");
	for(i=0;i<n;i=i+1)
	{
		printf("%d\n",arr[i]);
	}
}