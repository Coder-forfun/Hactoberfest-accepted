#include <iostream>
using namespace std;
int main() {
    // Insertion Sort
    int n,j;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
        int temp=a[i];
        for(j=i-1;j>=0 && a[j]>temp;j--){a[j+1]=a[j];}a[j+1]=temp;}
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}
