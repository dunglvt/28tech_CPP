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

int main(){
    
    fastIO;
    
    //code here
    ll n;
    cin >> n;
    ll a[n];
    FORL(i, 0, n-1){
    	cin >> a[i];
        if (isPrime(a[i]))
        {
            a[i] = 0;
        }
    }
    FORL(i, 0, n-1){
        cout << a[i] << ' ';
    }
    return 0;
}
