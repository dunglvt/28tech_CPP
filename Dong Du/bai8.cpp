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

ll F[1000001];

int main(){
    
    fastIO;
    
    //code here
    int n, x;
    cin >> n;

    F[1] = 2;
    F[2] = 8;
    FORL(i, 3, 1000000){
    	F[i] = 2*F[i-1] % MOD + 8*F[i-2] % MOD;
    	F[i] %= MOD; 
    }

    while(n--){
    	cin >> x;
    	cout << F[x] << '\n' ;
    }
    return 0;
}
