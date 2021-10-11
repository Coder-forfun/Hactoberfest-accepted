// C++ code for checking weather the given parenthesis is ballanced or not.
#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string st)
{
  stack<char> s;
  char x;
  for(int i=0;i<st.length();i++)
  {
    if(st[i]=='{'||st[i]=='['||st[i]=='(')                         //earlier check not for round brace
    {
      s.push(st[i]);
      continue;
    }
   else if (!s.empty())
   {
     char c= s.top(); 
     if(st[i]==')' &&c=='(' || st[i]==']' &&c=='[' || st[i]=='}' && c=='{')      //reduced switch case to compact form
       s.pop();
     else return false;
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
