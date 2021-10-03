//INSERTION SORT=insert an element from unsorted array to its correct position in sorted array
//eg: think that 1st element is in sorted array so start checking from the 2nd element as unsorted array, then compare 2nd and 1st element, so on and if they are in correct order we'll shift the larger one to right otherwise we'll put the smaller one to its correct position.


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"enter the values of array: ";
	for(int i=0; i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;  
		}
		arr[j+1]=current;		
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
	return 0;
}


