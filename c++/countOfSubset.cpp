#include <bits/stdc++.h>
using namespace std;

int countOfSubset(vector<int>& arr, int sum, int n){
    int t[n+1][sum+1];
    for(int i=0; i<n+1; i++){
        for(int j =0; j<sum+1; j++){
            if(i==0)
                t[i][j] = 0;
            if(j==0)
                t[i][j] = 1;
        }
    }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<sum+1; j++){    // if you have 0 as an element in your array then in this line put j=0
            t[i][j] = t[i-1][j];
            if(arr[i-1]<=j)
                t[i][j] = t[i-1][j-arr[i-1]];
        }
    }
    return t[n][sum];
}
int main (){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);
    int n = arr.size();
    int sum = 10;
    cout<<"Sum: "<<countOfSubset(arr, sum, n);
    return 0;
}
