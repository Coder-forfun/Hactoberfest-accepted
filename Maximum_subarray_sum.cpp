#include <iostream>
using namespace std;

// Naive Approach
/*
int maxsubsum(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int cur=0;
        for(int j=i;j<n;j++){
            cur=cur+arr[j];
            res=max(cur,res);
        }
    }
    return res;
}
*/

// O(n)->Approach
int maxsubsum(int arr[],int n){
    int sum=0,res=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        res=max(res,sum);
    }
    return res; 
}

int main(){
    int arr[]={ 4,-5,8,-2, -1};  // can use any other array elements
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxsubsum(arr,n);
    return 0;
}
