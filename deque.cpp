#include<iostream>
#include<deque>       //allows insertion and deletion at both ends
using namespace std;
int main(){
 deque <int> d;
 d.push_back(11);cout<<d.size()<<" ";
 d.push_front(22);cout<<d.size()<<" ";
 d.push_front(32);cout<<d.size()<<" ";
 d.push_back(44);cout<<d.size()<<" ";
 d.pop_front();cout<<d.size()<<" ";
 for(int i=0;i<d.size();++i){
     cout<<d[i]<<" ";
 }

 cout<<d.size();
//  cout<<d.front();
//  cout<<" "<<d.back();

return 0;
}