#include<bits/stdc++.h>
using namespace std;

int main(){
    string A;
    cin >> A;
    
    int n = A.length();

    int v[n], c[n];
    v[n-1] = c[n-1] = 0;

    for(int i = n-2; i >= 0; i--){
        if(A[i+1] == 'a' || A[i+1] == 'e' || A[i+1] == 'i' || A[i+1] == 'o' || A[i+1] == 'u'){
            v[i] = v[i+1] + 1;
            c[i] = c[i+1];
        }
        else{
            v[i] = v[i+1];
            c[i] = c[i+1] + 1;
        }
    }

    long long int ans = 0;
    for(int i = 0; i < n; i++){
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'){
            ans += c[i];
        }
        else{
            ans += v[i];
        }
    }

    cout << ans % 1000000007;
  
    return 0;
}
