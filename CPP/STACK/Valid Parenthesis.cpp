// C++ code for checking weather the given parenthesis is ballanced or not.
#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string st)
{
  stack<char> s;
  char x;
  for(int i=0;i<st.length();i++)
  {
    if(st[i]=='{'||st[i]=='['||st[i]=='{')
    {
      s.push(st[i]);
      continue;
    }
    if(s.empty())
    return false;
    switch(st[i])
    {
      case ')':
      x=s.top();
      s.pop();
      if(x=='}'||x==']')
      return false;
      break;
      case ']':
      x=s.top();
      s.pop();
      if(x=='}'||x==')')
      return false;
      break;
      case '}':
      x=s.top();
      s.pop();
      if(x==']'||x==')')
      return false;
      break;
    }
  }
  return (s.empty());
}
int main()
{ int t;
cin>>t;
while(t>0)
{
  string s;
  cin>>s;
  if(isBalanced(s))
    cout<<"Valid\n";
  else
    cout<<"Not Valid\n";
  t--;
}
  return 0;
}
