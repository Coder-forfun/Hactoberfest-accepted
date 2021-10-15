#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0; // initializing count to 0
    while(n) // run a loop till n is not equal to zero
    {
        n = n&(n-1);
        count++;
    }
    cout<<count<<"\n";
    return 0;
}
