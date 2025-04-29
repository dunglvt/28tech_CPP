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

int uocMax(int n){
	int m = 0;
	FORL(i, 2, sqrt(n)){
		while(n % i == 0){
			m = i;
			n /= i;
		}
	}
	if (n != 1)
	{
		m = n;
	}
	return m;
}

int main(){
    
    fastIO;
    
    //code here
    int t, n;
    cin >> t;
    while(t--){
    	cin >> n;
    	cout << uocMax(n) << '\n';
    }
    return 0;
}
