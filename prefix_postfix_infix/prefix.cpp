
//here is algo for converting prefix into infix 
#include <stack>
#include<iostream>
#include <string>
using namespace std;
//here is small sudo code that would help you in revision of code
/*stack st
 * work in 1Loop Having IF      0-9 then push
 *                      Else     take op1=st.top--pop op2=st.top2--pop
 *                          Switch  check +-/* and st.push(op+-/*op2)
 *                     AFTER LOOP --return s.top
 */
int prefix(string s){
    stack<int> st;
    for(int i=s.length()-1;i>=0 ;i--){
        if(s[i]>='0' && s[i]<='9'){
            int temp=s[i]-'0';
            st.push(temp);}

        else{
        int op1=st.top();
        st.pop();
        int op2=st.top();
        st.pop();
        switch (s[i]) {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            default:
                break;
        }
        }
    }
    return st.top();
}

int postfix(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push((s[i]-'0'));
        }else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            switch (s[i]) {
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
            }
        }
    }
    return st.top();

}

int main(){
cout<<prefix("-+7*45+20")<<endl;
cout<<postfix("46+2/5*7+")<<endl;

    return 0;
}
//2+3*3
//+2*33
//46+2*5/7+
//(4+6)*2/5+7
