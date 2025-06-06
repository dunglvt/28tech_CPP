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

bool cmp(int a, int b){
	return abs(a) < abs(b);
}

int main(){
    
    fastIO;
    
    //code here
    int n; cin >> n;
    int a[n];
    for(int &i : a){
    	cin >> i;
    }

    stable_sort(a, a + n, cmp);
    for(int i : a){
    	cout << i << ' ';
    }
    return 0;
}
