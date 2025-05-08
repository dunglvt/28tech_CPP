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

ll binPow(ll a, ll b){
	ll res = 1;
	a %= MOD;
	while(b != 0){
		if (b % 2)
		{
			res *= a;
			res %= MOD;
		}
		b >>= 1;
		a *= a;
		a %= MOD;
	}
	return res;
}

int main(){
    
    fastIO;
    
    //code here
    ll a, b;
    cin >> a >> b;
    cout << binPow(a, b);
    return 0;
}
