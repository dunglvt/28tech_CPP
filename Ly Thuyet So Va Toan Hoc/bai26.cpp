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

bool isPrime(ll n){
	FORL(i, 2, sqrt(n)){
		if (n % i == 0)
		{
			return false;
		}
	}
	return n > 1;
}

bool kiemTra(ll n){
	FORL(i, 1, 33){
		if (isPrime(i) && isPrime(pow(2, i) - 1))	
		{
			ll res = (pow(2, i - 1)) * (pow(2, i) - 1);
			if (res == n)	
			{
				return true;
			}
		}
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
