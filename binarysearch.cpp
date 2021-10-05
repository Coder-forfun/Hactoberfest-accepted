

#include <algorithm>
#include <iostream>
  
using namespace std;
  
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}
  
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
  
    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    return 0;
}
=======
/// main
#include <bits/stdc++.h>
using namespace std;
  
//define array globally
const int N = 1e6 +4;
  
int a[N];
int n;//array size
  
//elememt to be searched in array
   int k;
  
bool check(int dig)
{
    //element at dig position in array
    int ele=a[dig];
  
    //if k is less than
    //element at dig position 
    //then we need to bring our higher ending to dig
    //and then continue further
    if(k<=ele)
    {
        return 1;
    }
    else
    {
    return 0;
    }
}
void binsrch(int lo,int hi)
{
    while(lo<hi)
    {
        int mid=(lo+hi)/2;
        if(check(mid))
        {
            hi=mid;
        }
        else
        {
            lo=mid+1;
        }
    }
    //if a[lo] is k
    if(a[lo]==k)
        cout<<"Element found at index "<<lo;// 0 based indexing
    else
        cout<<"Element doesnt exist in array";//element was not in our array
  
}
  
  
int main()
{   
    cin>>n;
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   cin>>k;
  
   //it is being given array is sorted
   //if not then we have to sort it
  
   //minimum possible point where our k can be is starting index
   //so lo=0 
   //also k cannot be outside of array so end point
   //hi=n
  
   binsrch(0,n);
=======
#include <algorithm>
#include <iostream>
  
using namespace std;
  
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}
  
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
  
    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

  
    return 0;
}

=======

// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;


    if (array[mid] == x)
      return mid;

    // Search the left half
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
=======

#include <algorithm>
#include <iostream>
  
using namespace std;
  
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}
  
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
  
    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    return 0;
}
=======
/// main
#include <bits/stdc++.h>
using namespace std;
  
//define array globally
const int N = 1e6 +4;
  
int a[N];
int n;//array size
  
//elememt to be searched in array
   int k;
  
bool check(int dig)
{
    //element at dig position in array
    int ele=a[dig];
  
    //if k is less than
    //element at dig position 
    //then we need to bring our higher ending to dig
    //and then continue further
    if(k<=ele)
    {
        return 1;
    }
    else
    {
    return 0;
    }
}
void binsrch(int lo,int hi)
{
    while(lo<hi)
    {
        int mid=(lo+hi)/2;
        if(check(mid))
        {
            hi=mid;
        }
        else
        {
            lo=mid+1;
        }
    }
    //if a[lo] is k
    if(a[lo]==k)
        cout<<"Element found at index "<<lo;// 0 based indexing
    else
        cout<<"Element doesnt exist in array";//element was not in our array
  
}
  
  
int main()
{   
    cin>>n;
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   cin>>k;
  
   //it is being given array is sorted
   //if not then we have to sort it
  
   //minimum possible point where our k can be is starting index
   //so lo=0 
   //also k cannot be outside of array so end point
   //hi=n
  
   binsrch(0,n);
=======
#include <algorithm>
#include <iostream>
  
using namespace std;
  
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}
  
int main()
{
    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
  
    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    sort(a, a + asize);
    cout << "\n\nThe array after sorting is : \n";
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    if (binary_search(a, a + 10, 10))
        cout << "\nElement found in the array";
    else
        cout << "\nElement not found in the array";

  
    return 0;
}


