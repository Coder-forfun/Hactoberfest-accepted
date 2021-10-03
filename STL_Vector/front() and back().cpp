#include <iostream>

using namespace std;

#include <vector>

int main()
{
    vector<int> a ={0,1,2,3,4,5,6,7};
    vector<int>::iterator i;
    
    
    /*for(i=a.begin();i!=a.end();i++)
    {
        cout<< *i<<" ";
    }*/
    cout<<a.front()<<endl;
    cout<<a.back();
    
    return 0;
}

