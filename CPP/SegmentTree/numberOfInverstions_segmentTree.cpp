// program to count number of inversions in an array using segment Tree
#include<bits/stdc++.h>
using namespace std;
#define int int64_t

const int MAXN = 1e5 + 5;
int n;
int tree[  4*MAXN ]; // segment Tree
int a[ MAXN ]; // array

// set a[idx] = val in O(logN)
void update(int v , int tl, int tr , int idx , int val) {
	if(tl == tr) 
		tree[v] = val;
	else {
		int tmid = (tl + tr)/2;
		if(idx > tmid )
			update(2*v + 1 , tmid + 1 ,  tr , idx , val);
		else 
			update(2*v , tl , tmid , idx , val);
		tree[v] = tree[2*v] + tree[2*v + 1];
	}
}

// get a[l] + ... + a[r] in O(logN)
int sum(int v , int tl, int tr, int l , int r ){
	if(tl > r || l > tr)
		return 0;
	if(tl >= l && tr <= r) 
		return tree[v];
	int tmid = (tl + tr)/2;
	return sum(2*v , tl , tmid , l , r ) + sum(2*v + 1 , tmid + 1 , tr , l , r);
} 
int32_t main() {
	cin >> n;
	for(int i = 0 ; i < n; ++i) 
		cin >> a[i];
    
    // count number of inversions in array
	for(int i = 0 ; i < n; ++i) {
		cout << sum(1 , 0 , n-1 , a[i] , n ) << " ";
		update(1 , 0 , n-1 , a[i]-1 , 1 );
	}
}
