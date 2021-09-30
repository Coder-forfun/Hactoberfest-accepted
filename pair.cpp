#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> p;      // Declaration
    p = make_pair(2, "ABCD"); //initialisation
                              // We can also use cin to take .first and .second value in the vector.
    cout << p.first << " " << p.second;
    cout << endl;
    int a[3] = {1, 2, 3};
    int b[3] = {11, 22, 33};
    pair<int, int> q[3]; //Declaration of pair array
    q[0] = {a[0], b[0]};
    q[1] = {a[1], b[1]};
    q[2] = {a[2], b[2]};
    for (int i = 0; i < 3; ++i)
    {
        cout << q[i].first << " " << q[i].second << endl;
    }

    pair<string, string> s;
    getline(cin, s.first);
    getline(cin, s.second);
    cout << s.first << " " << s.second;

    return 0;
}