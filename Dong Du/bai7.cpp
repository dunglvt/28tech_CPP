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

ll binpow(ll a, ll n) {
    if (n == 0) return 1;
    ll X = binpow(a, n / 2);
    ll res = (X * X) % MOD;
    if (n % 2 == 1) res = (res * (a % MOD)) % MOD;
    return res;
}


int main(){
    
    fastIO;
    
    //code here
    ll a, b;
    cin >> a >> b;
    cout << binpow(a, b);
    return 0;
}
