#include<iostream>
#define size 20
using namespace std;
class queue{
public:
int queue[size];
int ele = -1;
int len=0;
void push(int value){
ele++;
queue[ele]=value;
len++;
}
void pop(){
    for(int i=0;i<len;i++){
        queue[i]=queue[i+1];
    }
    len--;
    ele--;
}
void display(){
    for(int i=0;i<len;i++){
        cout<<queue[i]<<"-->";
    }
    cout<<"NULL";
}
void peek(){
    cout<<"\n first "<<queue[0];
}
};
int main()
{
queue q;
q.push(2);
q.push(4);
q.push(6);
q.push(8);
q.display();
q.pop();
cout<<"\n";
q.display();cout<<"\n";
q.peek();
 return 0;
}
