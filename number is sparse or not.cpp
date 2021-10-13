#include<iostream>
#include<cstdio>

using namespace std;
int sparseOrNot(int num)
{
  for(int i=0;i<31;i++)
  {
    if(num&1==1 && ((num>>1)&1==1))
      return 0;
  num=num>>1;
  }
  return 1;
}
int main()
{
  int t, num, sp;
  cin>>t;
  while(t>0)
  {
    cin>>num;
    sp = sparseOrNot(num);
    cout<<sp<<endl;
    t--;
  }
  return 0;
}
