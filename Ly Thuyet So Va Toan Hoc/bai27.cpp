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

bool thuanNghich(int n){
	int tmp = n;
	int x = 0;
	while(n){
		x = x * 10 + n % 10;
		n /= 10;
	}
	return x == tmp;
}

bool check(int n){
	int cnt = 0;
	FORL(i, 2, sqrt(n)){
		if (n % i == 0)
		{
			++cnt;
			while(n % i == 0){
				n /= i;
			}
		}
	}
	if (n != 1)
	{
		++cnt;
	}
	return cnt >= 3;
}

int main(){
    
    fastIO;
    
    //code here
    int a, b;
    cin >> a >> b;

    int c = 0;
    FORL(i, a, b){
    	if (thuanNghich(i) && check(i))
    	{
    		cout << i << ' ';
    		c = 1;
    	}
    }
    if (c == 0)
    {
    	cout << -1;
    }
    return 0;
}
