//This is the Shell Sort Program in C
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_array(int arr[], int n) {
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}

void swap(int *x, int *y) {
    int temp=(*x);
    (*x)=(*y);
    (*y)=temp;
}

void shell_sort(int arr[],int n) {
    int gap, flag=1;
    gap=n;
    while(flag==1||gap>1) {
        flag=0;
        gap=(gap+1)/2;
        for(int i=0;i<(n-gap);i++) {
            if(arr[i+gap]<arr[i]) {
              //  printf("\nAt %d position, %d and %d is swapped!",i,arr[i+gap],arr[i]);
                swap(&arr[i+gap],&arr[i]);
                flag=0;
            }
        }
    }

}

int main(void) {
    srand(time(0));
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        arr[i]=(rand()%1000);
    }
    printf("Array before sorting: \n");
    print_array(arr,n);
    shell_sort(arr,n);
    printf("\nSorted array: \n");
    print_array(arr,n);
    return 0;
}