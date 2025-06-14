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

int sumDigit(int n){
	int sum = 0;
	while (n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool cmp(int a, int b){
	if(sumDigit(a) == sumDigit(b)){
		return a < b;
	} else {
		return sumDigit(a) < sumDigit(b);
	}
}

int main(){
    
    fastIO;
    
    //code here
    int n; cin >> n;
    int a[n];
    for(int &i : a){
    	cin >> i;
    }

    sort(a, a + n, cmp);
    for(int i : a){
    	cout << i << ' ';
    }
    return 0;
}
