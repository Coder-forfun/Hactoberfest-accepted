/* 
Write a program that takes input an array of distinct integers and returns the length of the highest mountain.
Eg: for input:
arr[]={5,6,1,2,3,4,5,4,3,2,0,1,2,3,2,4}.
Output: 9
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
	int n=16,max=0;
	for(int i=1;i<n-2;){
		if(arr[i]>arr[i-1] && arr[i+1]<arr[i]){
			int count=1;
			int j=i;
			// Count forwards
			while(arr[i]>arr[i+1]) 
			/* i<=n-2 for condition
			 else segmentation fault will take place due to arr[i+1]*/
			{
				count++;
				i++;
			}
			// Count backwards
			while(arr[j]>arr[j-1])
			/* j>=1 other segmentation fault due arr[j-1]*/
			{
				count++;
				j--;
			}
			if(count>max){
				max=count;
			}
		}
		else{
			i++;
		}
		
	}
	cout<<max<<endl;
}
