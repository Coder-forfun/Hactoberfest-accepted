//First Container : Array
//Array stores element in contagious memory locations.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5}; //declaration
    for (auto it : arr)                  //printing using auto iterator
    {
        cout << it << " ";
    }
    cout << endl
         << arr.at(0) << endl;                            //printing elemnt at 0 using at func
    for (auto it2 = arr.begin(); it2 != arr.end(); ++it2) //printing using begin() and end()
    {
        cout << *it2 << " ";
    }
    cout << endl;
    for (auto it3 = arr.rbegin(); it3 != arr.rend(); ++it3) //printing in reverse order using rbegin() and rend()
    {
        cout << *it3 << " ";
    }
    cout << endl;
    cout << arr.front(); //  printing first and last element
    cout << " " << arr.back();
    cout<<"\nSize of array :"<<arr.size()<<endl;
    array<int ,10> arr1;
    arr1.fill(10);       //filling array with fill() fnc   
    for (auto it : arr1)                  //printing using auto iterator
    {
        cout << it << " ";
    }     
    return 0;
}