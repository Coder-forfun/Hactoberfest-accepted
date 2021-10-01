#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long n, m;

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        int count = 0;
        for (int i = 1; i<n+1; i++)
        {
            for (int j = i+1; j<n+1; j++)
            {
                if (((m % i) % j) == ((m % j) % i))
                {
                    count += 1;
                }
                else 
                {
                    count += 0;
                }
            }
        }
        cout<<count<<endl;
    }
    


}