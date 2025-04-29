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

ll timX(ll n, ll p){
	ll cnt = 0;
	for (ll i = p; i <= n; i *= p)
	{
		cnt += n/i;
	}
	return cnt;
}

int main(){
    
    fastIO;
    
    //code here
    ll n, p;
    cin >> n >> p;
    cout << timX(n, p);
    return 0;
}
