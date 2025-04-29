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
	int cnt = 0;
	FORL(i, 2, sqrt(n)){
		if (n % i == 0)
		{
			int res = 0;
			++cnt;
			while(n % i == 0){
				++res;
				n /= i;
			}
			if (res > 1)
			{
				return false;
			}
		}
	}
	if (n != 1)
	{
		++cnt;
	}
	return cnt == 3;
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
