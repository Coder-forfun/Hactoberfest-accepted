#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec ={1,1,2,2,2,3,4,4,4,4,5,7,7};
    auto itr = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(), itr));
  
    for(int i = 0; i < vec.size(); i++){
      cout<<vec[i]<<' ';
    }
    /*
      Output : 1,2,3,4,5,7
    */
    return 0;
}
