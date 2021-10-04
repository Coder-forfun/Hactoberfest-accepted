///check if a given number is power of 2
//#Hactoberfest
#include<bits/stdc++.h>
using namespace std;

int main()
{  /// n&(n-1) = 0 , yes power of 2
int n;
cin>>n;
 if(!(n&(n-1))){
     cout<<"Yes";
 }
 else {cout<<"No";}
return 0;
}