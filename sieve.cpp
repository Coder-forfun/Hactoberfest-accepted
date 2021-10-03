//Sieve of Erastothenes

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
 //clrscr();
 int n,f=0;
 cout<<"Enter the range ";
 cin>>n;
 int p[100],m=0,r=sqrt(n),q=2;

 for(int i=1;i<=n;++i)
 { f=0;
  for(int j=q;j<=r;++j)
  { if(j==i) {f=1;}
    else if(i%j==0){f=0; break;}
    else f=1;
  }
  if(f==1) cout<<i<< " "; //{p[m]=i; ++m;}
 }

  return 0;
  }
