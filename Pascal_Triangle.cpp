C++ Program to Print Pascal Triangle using function
Pascal’s Triangle
Pascal’s triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value n as input and prints first n lines of the Pascal’s triangle. Following are the first 6 rows of Pascal’s Triangle.
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1

Here is source code of the C++ Program to Print Pascal Triangle using function. The C++ program is successfully compiled and run(on Codeblocks) on a Windows system. The program output is also shown in below.
  /* C++ Program to Print Pascal Triangle using function  */

#include<iostream>

using namespace std;

//function to calculate factorial
long fact(int x)
{
    int i;
    long f=1;

    for(i=1;i<=x;++i)
    {
        f=f*i;
    }

    return f;
}

int main()
{
    int i,j,k,n;

    cout<<"How many lines u want to Print :: ";
    cin>>n;

    for(i=0;i<n;++i)
    {
        //loop to print spaces at starting of each row
        for(j=1;j<=(n-i-1);++j)
        {
            cout<<" ";
        }

        //loop to calculate each value in a row and print it
        for(k=0;k<=i;++k)
        {
             cout<<fact(i)/(fact(i-k)*fact(k))<<" ";
        }

        cout<<"\n";    //print new line after each row
    }

    return 0;
}
OUTPUT : :
/* C++ Program to Print Pascal Triangle using function */

How many lines u want to Print :: 10

         1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1
    1 5 10 10 5 1
   1 6 15 20 15 6 1
  1 7 21 35 35 21 7 1
 1 8 28 56 70 56 28 8 1
1 9 36 84 126 126 84 36 9 1

Process returned 0
Above is the source code for C++ Program to Print Pascal Triangle using function which is successfully compiled and run on Windows System.The Output of the program is shown above .
