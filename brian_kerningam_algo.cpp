//      BRIAN KERNINGAM ALGORITHM (COUNT SET BITS)

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    while(n>0)
    {
        n = (n&(n-1));
        res++;
    }
    cout<<res<<endl;
    return 0;
}