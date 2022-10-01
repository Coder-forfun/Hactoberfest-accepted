// Name reduction problem 

#include <bits/stdc++.h>
#define MAX 100000
using namespace std;

void solve2()
{
    string a, b;
    cin >> a >> b;

    int n;
    cin >> n;
    string c = "";

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        c += temp;
    }

    string d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    

    int i = 0, cnt = 0;
    for (char e : c)
    {
        while (e != d[i] and i < d.length())
            i++;
        if (e == d[i])
        {
            i++;
            cnt++;
        }
        if (cnt == c.length() or i > d.length() - 1)
            break;
    }

    if (cnt == c.length())
        cout << "YES";
    else
        cout << "NO";
}

void solve1()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve2();
        cout << endl;
    }
}

int main()
{
    solve1();
    return 0;
}
