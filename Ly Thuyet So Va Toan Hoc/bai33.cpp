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

ll latNguoc(ll n){
	ll tmp = 0;
	while(n){
		tmp = tmp * 10 + n % 10;
		n /= 10;
	}
	return tmp;
}

int main(){
    
    fastIO;
    
    //code here
    ll n;
    cin >> n;

    ll res = n;
    int s2 = 0, s3 = 0, s5 = 0, s7 = 0;
    while(n){
    	int dv = n % 10;
    	if (dv == 2)
    	{
    		++s2;
    	} else if (dv == 3)
    	{
    		++s3;
    	} else if (dv == 5)
    	{
    		++s5;
    	} else if (dv == 7)
    	{
    		++s7;
    	}
    	n /= 10;
    }

    if (s2 != 0)
    {
    	cout << 2 << ' ' << s2 << endl;
    }
    if (s3 != 0)
    {
    	cout << 3 << ' ' << s3 << endl;
    }
    if (s5 != 0)
    {
    	cout << 5 << ' ' << s5 << endl;
    }
    if (s7 != 0)
    {
    	cout << 7 << ' ' << s7 << endl;
    }
    cout << endl;


    ll tmp = latNguoc(res);
    while(tmp){
    	int dv = tmp % 10;
    	if (dv == 2 && s2 != 0)
    	{
    		cout << 2 << ' ' << s2 << endl;
    		s2 = 0;
    	}
    	if (dv == 3 && s3 != 0)
    	{
    		cout << 3 << ' ' << s3 << endl;
    		s3 = 0;
    	}
    	if (dv == 5 && s5 != 0)
    	{
    		cout << 5 << ' ' << s5 << endl;
    		s5 = 0;
    	}
    	if (dv == 7 && s7 != 0)
    	{
    		cout << 7 << ' ' << s7 << endl;
    		s7 = 0;
    	}
    	 tmp /= 10;
    }
    return 0;
}
