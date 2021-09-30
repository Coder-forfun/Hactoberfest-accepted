//Second Container : Array
//Vector ~ Dynamic Array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;  //declaration
    v.push_back(1); //insertion using pop_back fnc
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    for (auto it : v) //printing using auto iterator
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it2 = v.begin(); it2 != v.end(); ++it2) //printing using begin() and end()
    {
        cout << *it2 << " ";
    }
    cout << endl;
    cout << "Size of vector : " << v.size();
    v.pop_back(); //popping out last element
    cout << endl
         << "Capacity of vector : " << v.capacity() << endl;
    vector<int> v2;
    v2 = v;            //copying v vector into v2
    for (auto it : v2) //printing using auto iterator
    {
        cout << it << " ";
    }
    v.emplace_back(5); //entering value using emplace back fnc
    return 0;
}