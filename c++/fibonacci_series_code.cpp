#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    return 0;
}
