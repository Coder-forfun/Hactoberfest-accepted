#include <iostream>

using namespace std;

#include <vector>

int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int>:: iterator i=v.begin();
    
    v.insert(i,2,10);
    
    for(i = v.begin(); i != v.end(); i++) 
    {
          cout << *i <<" ";
    }
    return 0;
}

