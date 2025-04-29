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

bool isPrime(int n){
	FORL(i, 2, sqrt(n)){
		if (n % i == 0)
		{
			return false;
		}
	}
	return n > 1;
}

bool kiemTra(int n){
	while(n){
		if (isPrime(n%10) == false)
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
    int a, b;
    cin >> a >> b;

    int count = 0;
    FORL(i, a, b){
    	if (kiemTra(i) && isPrime(i))
    	{
    		++count;
    	}
    }
    cout << count;
    return 0;
}
