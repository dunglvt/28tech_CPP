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

int gcd(int a, int b){
	if (b==0)
	{
		return a;
	}
	return gcd(b, a%b);
}

int main(){
    
    fastIO;
    
    //code here
    int a, b;
    cin >> a >> b;
    FORL(i, a, b-1){
    	FORL(j, i+1, b){
    		if (gcd(i, j) == 1)
    		{
    			cout << '(' << i << ',' << j << ")\n";
    		}
    	}
    }
    return 0;
}
