// Aggresive Cows Problem
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid, int n){
    int cowCount = 1;
    int lastPos = stalls[0];
    for(int i=0; i<n; i++ ){
        
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggresiveCows(vector<int> &stalls,int k){
    sort(stalls.begin(),stalls.end());
    int s = 0;
    // int maxi = -1;
    // for(int i = 0 ; i < stalls.size() ; i++){
    //     maxi = max(maxi,stalls[i]);
    // }
    // int e = maxi;
    int n = sizeof(stalls)/sizeof(stalls[0]);
    int e = n-1;
    int ans = -1;
    int mid = s + (e - s)/2;
    while(s<=e){
        if(isPossible(stalls,k,mid,n)){
            ans = mid;
            s = mid + 1;
        }else{  
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}
int main(){
    vector<int> stalls = {4,2,1,3,6,7,9,11,84,20};
    cout<<"Maximum distance is --> "<<aggresiveCows(stalls,2)<<endl;
    return 0;
}