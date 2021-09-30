// 2D vector
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
 vector <vector <int>> v;  //declaration of 2d vector
 vector <int> v1;
 int i;
 for( i=1;i<=5;++i)
 {
     v1.push_back(i*10);
 }
 vector <int> v2;
 for(;i<=10;++i)
 {
     v2.push_back(i*10);
 }
 vector <int> v3;
 for(;i<=15;++i)
 {
     v3.push_back(i*10);
 }
 v.push_back(v1);   //pushing vectors as a element in 2d vector
 v.push_back(v2);
 v.push_back(v3);
for(auto o_it:v)
{
    for(auto i_it:o_it)
    {
        cout << i_it<<" ";
    }
    cout<<endl;
}
return 0;
}