#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FOR(i,l,r) for(auto i = l; i <= r; i++)
#define FORD(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

bool soDep(int n){
	int dv = (n % 10) % 2;
	while(n) {
	    int tmp = n % 10;
	    if ((tmp % 2) != dv)
	    {
	    	return false;
	    }
	     n /= 10;
	}
	return true;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fastIO;
    	
    //code here
    int a, b;
    cin >> a  >> b;
    FOR(i, a, b){
    	if (soDep(i))
    	{
    		cout << i << ' '; 
    	}
    }
    return 0;
}
