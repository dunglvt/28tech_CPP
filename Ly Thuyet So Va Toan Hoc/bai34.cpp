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

ll gcd(int a, int b){
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(int a, int b){
    return 1ll*a/gcd(a, b) * b;
}

int main(){
    
    fastIO;
    
    //code here
    int x, y, z, n;
    cin >> x >> y >> z >> n;

    ll res = lcm(x, lcm(y, z));
    ll l = pow(10, n-1);
    ll r = pow(10, n) - 1;

    if (res <= r)
    {
        cout << (res + l - 1)/ res * res;
    } else {
        cout << -1;
    }
    return 0;
}
