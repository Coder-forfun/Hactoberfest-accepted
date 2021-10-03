// Radix Sort 

// Radix sort is an integer sorting algorithm that
// sorts data with integer keys by grouping the keys by 
// individual digits that share the same significant position
// and value (place value). Radix sort uses counting sort as
// a subroutine to sort an array of numbers.

// Time Complexity of Radix Sort in Worst Case is : O(d*(n+b))

#include <iostream>
 
using namespace std;
 

int getMax(int arr[], int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}
 

void countSort(int arr[], int n, int exp)
{
	
	int output[n], i, count[10] = {0};
 
	
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;
 
	
	for (i = 1; i < 10; i++)
		count[i] += count[i-1];
 
	
	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}
 
	
	for (i = 0; i < n; i++)
		arr[i] = output[i];
}
 

void radixsort(int arr[], int n)
{
	int exp, m;
	m = getMax(arr, n);
 

	for (exp = 1; m/exp > 0; exp *= 10)
		countSort(arr, n, exp);
}
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
 
	radixsort(arr, n);
 

	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	return 0;
}