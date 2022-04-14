//
// Created by abhi on 07/09/21.
//

#include <iostream>
#include <stack>
#include<string>
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

//here is a sudo code that would helps you to revise 
/*
 * stack st, str rst
 * if based on one main loops having 4 if statement
 *              1 IF for having char(operants)=>            insert directly rst
 *              2 If for havin ( =>                         insert in stack
 *              3 IF for having ) =>                        st int rst until st.top == (
 *              else for having operators ==                int rst unitl #prec s[i]>st.top then st push
 *        last while for remaining
 *
 */
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
    cout<<infixTopost("(a-b/c)*(a/k-l)")<<endl;
//(a-b/c)*(a/k-l)
    return 0;
}
