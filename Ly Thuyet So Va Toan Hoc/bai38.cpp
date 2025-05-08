#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FORL(i,l,r) for(auto i = l; i <= r; i++)
#define FORR(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

bool isPrime(int n){
	FORL(i, 2, sqrt(n)){
		if (n % i == 0)
		{
			return false;
		}
	}
	return n > 1;
}

int bac(int n, int p){
	int res = 0;
	for(int i = p; i <= n; i *= p){
		res += n/i;
	}
	return res;
}

int main(){
    
    fastIO;
    
    //code here
    int n;
    cin >> n;

    int sum = 1;
    FORL(i, 1, n){
    	if (isPrime(i))
    	{
    		sum *= (bac(n, i) + 1) % MOD;
    		sum %= MOD;
    	}
    }
    cout << sum;
    return 0;
}
