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

bool kiemTra(ll n){
	while(n){
		int dv = n % 10;
		if (dv != 6 && dv != 8 && dv != 0)
		{
			return false;
		}
		 n /= 10;
	}
	return true;
}

int main(){
    
    fastIO;
    
    //code here
    ll n;
    cin >> n;
    if (kiemTra(n))
    {
    	cout << 1;
    } else {
    	cout << 0;
    }
    return 0;
}
