#include<iostream>
using namespace std;
template < typename T>
void calculator(T a,T b){
  cout<<"Sum of input numbers: "<<a+b<<endl;
  cout<<"Multiply of input numbers: "<<a*b<<endl;
  cout<<"Division of input numbers: "<<a/b<<endl;
}
int main()
{
    calculator <int>(2,3);
 
    calculator <float>(2.2,3.3);
   
    calculator <double>(2.2222,3.333);
}

