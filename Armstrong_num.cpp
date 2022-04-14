C++ Program to Check whether a Number is Armstrong or not
  Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits is equal to the number itself. Some Armstrong numbers is 0, 1, 153, 370, 371, 407, 1634 etc.
  Here is source code of the C++ Program to Check whether a Number is Armstrong or not using function. The C++ program is successfully compiled and run(on Codeblocks) on a Windows system. The program output is also shown in below.
  /* C++ Program to Check whether a Number is Armstrong or not using function  */

#include<iostream>
using namespace std;

int power(int c, int d);

int main()
{
     int num;
     int f,rem,sum=0,temp,a=0;

     cout<<"Enter any number :: ";
     cin>>num;

     temp=num;

     while(temp != 0)
     {
         temp=temp/10;
         a=a+1;
     }

     f=num;

     while(f!=0)
     {
         rem=f%10;
         sum = sum + power(rem,a);
         f=f/10;
     }

     if( sum == num )
     {
         cout<<"\n The Entered Number [ "<<num<<" ] is an Armstrong number.\n";
     }
     else
     {
         cout<<"\n The Entered Number [ "<<num<<" ] is Not an Armstrong number.\n";
     }

     return 0;
}


int power(int c, int d)
{
    int pow=1;
    int i=1;
    while(i<=d)
    {
      pow=pow*c;
      i++;
     }
     return pow;
}
Output : :
/* C++ Program to Check whether a Number is Armstrong or not using function  */

Enter any number :: 153

 The Entered Number [ 153 ] is an Armstrong number.

Process returned 0
Above is the source code for C++ Program to Check whether a Number is Armstrong or not using function which is successfully compiled and run on Windows System.The Output of the program is shown above .
