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

int nt(int n, int k){
	int cnt = 0;
	FORL(i, 2, sqrt(n)){
		if (n % i == 0)
		{
			while(n % i == 0){
				++cnt;
				 n/= i;
				 if (cnt == k)
				{
					return i;
				}
			}
		}
	}
	if (n != 1)
	{
		++cnt;
		if (cnt == k)
		{
			return n;
		}
	}
	return -1;
}

int main(){
    
    fastIO;
    
    //code here
    int n, k;
    cin >> n >> k;
    cout << nt(n, k);
    return 0;
}
