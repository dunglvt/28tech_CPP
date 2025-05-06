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

ll thuanNghich(ll n){
	ll tmp = 0;
	while(n){
		tmp = tmp * 10 + n % 10;
		n /= 10;
	}
	return tmp;
}

bool kiemTra(ll n){
	int cuoi = n % 10;
	n /= 10;
	ll tmp = 0;
	while(n > 9){
		tmp = tmp * 10 + n % 10;
		n /= 10;
	}
	int dv = n % 10;
	if (tmp == thuanNghich(tmp) && ((dv == 2*cuoi) || (2*dv == cuoi)))
	{
		return true;
	}
	return false;
}

int main(){
    
    fastIO;
    
    //code here
    ll n;
    cin >> n;
    if (kiemTra(n))
    {
    	cout << "YES";
    } else {
    	cout << "NO";
    }
    return 0;
}
