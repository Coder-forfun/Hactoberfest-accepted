#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 priority_queue<int> pq;
 pq.push(  1);
 pq.push(6);
 pq.push(4);
 pq.push(-1);
 cout<<pq.top();
 pq.pop();
 cout<<endl;
 cout<<pq.top();
return 0;
}