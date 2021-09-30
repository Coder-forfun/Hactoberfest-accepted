// it maps keys to values
//returns keys in sorted order
//program to map number to sqr
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m;
    m[1] = 1; //here 1 in brackets is key and 1 after is its mapped value
    m[2] = 4;
    m.insert({-1, 1});
    m[3] = 9;
    m[10] = 100;
    m.insert({-3, 9}); //same -1 is key and 1 is the value
    for (auto i : m)
    {
        cout << i.first << "-->" << i.second << endl; //this will print in sorted order
    }

    cout << "Finding -1 " << m.count(-1) << endl; //returns bool value : 1 if present 0 if not
    cout << "Finding -6 " << m.count(-6) << endl;
    //This particular block searches for a key and then print the map starting from that key neglecting the key less than it. for ex in this case if we want to see just the positive mapping we can do it in this manner.
    {
        auto it = m.find(1);
        for (auto i = it; i != m.end(); ++i)
        {
            cout << (*i).first << "-->" << (*i).second << endl;
        }
    }
    return 0;
}