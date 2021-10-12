#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    bool isPrime[n + 1];
    memset(isPrime, 1, sizeof(isPrime));

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i] == 1)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;

    sieve(n);
    return 0;
}
