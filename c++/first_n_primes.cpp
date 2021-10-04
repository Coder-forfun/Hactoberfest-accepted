#include<bits/stdc++.h>
using namespace std;

void sieve();

const int mod = 1e9 + 7;
const int N = 3e6 + 10;

vector<int> isprime(N);
vector<int> primes;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    sieve();
    for(int i = 1;i<N;i++)
    {
        if(isprime[i] == 0)
        {
            primes.push_back(i);
        }
    }
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cout<<primes[i]<<" ";
    }    

    return 0;
}

void sieve(){
	isprime[0] = 1;
	isprime[1] = 1;
	for(int i = 2; i < N; ++i){
		if(isprime[i] == 0){
			for(int j = 2; i*j < N; ++j){
				isprime[i*j] = 1;
			}
		}
	}
}
