#include <iostream>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+fib(n-2);
}

// Fibonacci Series
// 0 1 1 2 3 5 8 13 21 34

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
