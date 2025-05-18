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
	if (b==0)
	{
		return a;
	}
	return gcd(b, a%b);
}

int main(){
    
    fastIO;
    
    //code here
    int n;
    cin >> n;
    int a[n];
    FORL(i, 0, n-1){
    	cin >> a[i];
    }

    int res = 0;
    FORL(i, 0, n-2){
    	FORL(j, i+1, n-1){
    		if (gcd(a[i], a[j]) > res)
    		{
    			res = gcd(a[i], a[j]);
    		}
    	}
    }
    cout << res;
    return 0;
}
