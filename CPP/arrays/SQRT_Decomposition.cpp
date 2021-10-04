
//Problem Statement : you have given queries calculate sum in range [l,r].

///Time complexity = O(sqrt N)
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5+2, MOD = 1e9+7;

signed main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int len = sqrtl(n)+1;
    vector<int> b(len);

////pre computation of blocks
     for(int i=0;i<n;i++){
       b[i/len] +=a[i];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        //input in 1 based indexing
        cin>>l>>r;
        //converting to  0 based indexing
        l--;r--;
        int sum =0;
        for(int i=l;i<=r;){
            if(i%len == 0 && i+len-1 <=r){
                sum += b[i/len];
                i += len;
            }
            else{
                sum+=a[i];
                i++;
            }
        }
        cout<<sum;
    }
return 0;
}

//sample input :
//  9
//  1 5 -2 6 8 -7 2
//  1 11
//  2
//  1 6
//  2 7
// output: 11
// 12
