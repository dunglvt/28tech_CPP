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

//constant
#define MOD 1000000007
#define PI 3.14

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
    }
    return true;
}
int main(){
    
    fastIO;
    
    //code here
    int a, b;
    cin >> a >>b;
    ll x = 1;
    FORL(i, 1, b){
        x *= a%MOD;
        x %= MOD;
    }
    cout << x;
    return 0;
}
