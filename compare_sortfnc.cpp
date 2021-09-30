#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
bool myCmp(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.second > p2.second)
    {
        return 1;
    }
    else if(p1.second == p2.second)
    {
        if(p1.first < p2.first)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    return 0;
}  
int main(){
 vector <pair<string,int>> v ={{"ram",89},{"shyam",91},{"pyam",89}};
 sort(v.begin(),v.end(),myCmp);
 for(auto i=0;i<v.size();++i){
     cout<<v[i].first<<" "<<v[i].second<<endl;
 }
return 0;
}