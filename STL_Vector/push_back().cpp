#include <iostream>

using namespace std;

#include <vector>

int main()
{
    vector<int> a;
    int i;
    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}

