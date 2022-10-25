// sort012 (code studio)

#include <iostream>
using namespace std;


void printArray(int arr[], int n){
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void sort012(int arr[], int size){

    int i=0;
    int j=0;
    int k=size-1;

    while(j <= k){

        if(arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }else if(arr[j] == 1){
            j++;
        }else if(arr[j] == 2){
            swap(arr[j], arr[k]);
            k--;
        }
    }


}

int main()
{

    int arr[7] = {2, 2, 2, 1, 1, 1, 0};

    sort012(arr, 7);
    printArray(arr, 7);

    return 0;
}