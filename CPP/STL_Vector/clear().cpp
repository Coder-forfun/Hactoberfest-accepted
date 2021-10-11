#include <iostream>

using namespace std;

#include <vector>

int main()
{
    vector<int> a ={1,2,3,4,5};
    vector<int>::iterator i;
    
    a.clear();
    for(i=a.begin();i!=a.end();i++)
    {
        cout<< *i<<" ";
    }
    
    return 0;
}

