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

int main(){
    
    fastIO;
    
    //code here
    int n;
    cin >> n;
    int a[n];

    FORL(i, 0, n-1){
    	cin >> a[i];
    }

    FORL(i, 0, n-1){
    	int cnt = 0, cnt1 = 0;
    	FORL(j, 0, i-1){
    		if (a[j] > a[i])
    		{
    			++cnt;
    		}
    	}
    	FORR(k, n-1, i+1){
    		if (a[k] < a[i])
    		{
    			++cnt1;
    		}
    	}
    	cout << cnt << ' ' << cnt1 << endl;
    }
    return 0;
}
