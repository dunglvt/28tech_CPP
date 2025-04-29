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

int main(){
    
    fastIO;
    
    //code here
    int n;
    cin >> n;

    ll sum = 0;
 
    FORL(i, 1, n){
    	ll lt = 1;
    		FORL(j, 1, i){
    			lt *= i%MOD;
    			lt %= MOD;
    		}
    	sum += lt;
    	sum %= MOD;
    }
    cout << sum;
    return 0;
}
