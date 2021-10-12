// this algorithm is used to get the max sum in an array with a time complexity of O(n).


#include <iostream>
#include <climits>
using namespace std;

int main(){
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   int currentsum = 0;
   int maxsum = INT_MIN;
   for(int i=0;i<n;i++){
      currentsum += a[i];
      if(currentsum<0){
         currentsum = 0;
      }
      maxsum = max(maxsum, currentsum);
   }
   cout<<maxsum<<endl;
   return 0;
}
