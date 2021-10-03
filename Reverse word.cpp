//ex S = i.like.this.program.very.much
//Output: much.very.program.this.like.i
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    // code here
    int k=s.length();
    string res="";
    for(int i=k-1;i>=0;i--)
    {
        if(s[i]=='.')
        {
            for(int j=i+1;j<k;j++)
            {
                res+=s[j];
            }
            res+=s[i];
            k=i;
        }
    }
    for(int j=0;j<k;j++)
    {
        res+=s[j];
    }
    return res;
}

int main()
{
    string s = "i.like.this.programming.very.much";
    cout<<reverseWords(s);
    return 0;
}
