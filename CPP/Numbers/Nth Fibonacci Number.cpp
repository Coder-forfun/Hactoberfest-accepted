#include<iostream>
using namespace std;

int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1)+fib(n-2);
}

int main()
{
    int n, num=0;
    cout<<"Enter the no. of term you want to search in fibonaci series: ";
    cin>>n;
    num = fib(n);
    cout<<"nth Term of Fibonacci series is: "<<num;
}
