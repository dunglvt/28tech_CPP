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

bool phanTich(int n){
	FORL(i, 2, sqrt(n)){
		int res = 0;
		if (n % i == 0)
		{
			while(n % i == 0){
				++res;
				n /= i;
			}
		}
		if (res >= 2)
		{
			return true;
		}
	}
	return false;
}

int main(){
    
    fastIO;
    
    //code here
    int a, b;
    cin >> a >> b;
    FORL(i, a, b){
    	if (phanTich(i))
    	{
    		cout << i << ' ';
    	}
    }
    return 0;
}
