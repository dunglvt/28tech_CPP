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

bool kiemTra(int n){
	int check = 0;
	int tmp = n;
	int sum = 0;
	while(n){
		if (n % 10 == 6)
		{
			check = 1;
		}
		sum += n % 10;
		n /= 10;
	}
	return thuanNghich(tmp) && check && (sum % 10 == 8);
}

int main(){
    
    fastIO;
    
    //code here
    int a, b;
    cin >> a >> b;
    FORL(i, a, b){
    	if (kiemTra(i))
    	{
    		cout << i << ' ';
    	}
    }
    return 0;
}
