#include <iostream>
using namespace std;

int main()
{
    //swap of two number using bitwise and without using third number
    int x,y;
    //input two number
    cin>>x>>y;
    cout<<"num are " << "x is :" << x << " y is :" << y <<endl;
    x = x*y;
    y = x/y;
    x = x/y;
    

    cout<<"After swaping number are " << "x is :" << x << " and y is :" << y<<endl;
}
