#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Bucket Sort Program when integers are floating point numbers in some range

void bucketSort(float *arr,int n)
{
    vector<float> b[n];
    int i,j;
    for(i=0;i<n;i++){
        int bi=n*arr[i];
        b[bi].push_back(arr[i]);
    }

    for(i=0;i<n;i++)
    {
        sort(b[i].begin(),b[i].end());
    }

    int index=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<b[i].size();j++)
            arr[index++]=b[i][j];
    }

}


int main(){
int n;
float arr[200];

cout<<"Enter N : ";
cin>>n;
int i;
for(i=0;i<n;i++)
    cin>>arr[i];

bucketSort(arr,n);
cout<<"Sorted Array"<<endl;
for(i=0;i<n;i++)
    cout<<arr[i]<<endl;


return 0;
}
