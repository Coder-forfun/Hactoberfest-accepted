#include<iostream>
using namespace std;

template<class X>
class calci
{
    X a, b;
    public:
        void getdata()
        {
            cin>>a>>b;
        }
        void sum()
        {
            cout<<"The sum of the input is "<<a+b<<endl;
        }
        void sub()
        {
            cout<<"The Difference between the input is "<<a-b<<endl;
        }
        void prod()
        {
            cout<<"The Product of the input is "<<a*b<<endl;
        }
        void div()
        {
            cout<<"The Quotient of the input is "<<a/b<<endl;
        }
};

int main()
{
    calci<int> a;
    calci<double> b;
    char c;
    string ch;
    cout<<"Enter two numbers of integer type:\n";
    a.getdata();
    cout<<"Enter two numbers of double type:\n";
    b.getdata();
    do
    {
        cout<<"Enter + for Addition.\nEnter - for Subtraction.\n";
        cout<<"Enter * for Multiplication.\nEnter / for Division.\n";
        cin>>c;
        switch (c)
        {
        case '+':
                a.sum();
                b.sum();
                break;
        case '-':
                a.sub();
                b.sub();
                break;
        case '*':
                a.prod();
                b.prod();
                break;
        case '/':
                a.div();
                b.div();
                break;
        default:
                cout<<"Wrong input.\n";
                break;
        }
        cout<<"Do you want to continue?(yes/no)\n";
        cin>>ch;
    }
    while(ch != "no");
    return 0;
}