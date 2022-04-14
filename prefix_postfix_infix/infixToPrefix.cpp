//

//
#include <iostream>
#include<string>
#include<stack>
using namespace std;
int prec(char a){
    if(a=='^')return 1;
    else if(a=='/' || a=='*'){
        return 2;
    }else if(a=='+' || a=='-'){
        return 1;
    }
    else{
        return -1;
    }

}

string reverString(string s){
    string rst;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]=='(')rst+=')';
        else if(s[i]==')')rst+='(';
        else
        rst+=s[i];

    }
    return rst;

}
string infixTopost(string s){
    stack<char>st;
    string rst;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            rst+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            st.pop();
            while(!st.empty() && st.top()!='(')
            { rst+=st.top();
                st.pop();}
            st.pop();
        }
        else{
            while(!st.empty() &&prec(st.top())>prec(s[i])){
                rst+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        rst+=st.top();
        st.pop();
    }
    return rst;
}


int main(){

    cout<<infixTopost(reverString("(a-b/c)*(a/k-l)"));
    return 0;
}
