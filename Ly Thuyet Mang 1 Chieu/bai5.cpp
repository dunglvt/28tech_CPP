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
    cout << a[0] << ' ' << a[n-1] << endl;
    cout << a[1] << ' ' << a[n-2] << endl;
    if (n & 1)
    {
    	cout << a[n/2] ;
    } else {
    	cout << "28tech";
    }
    return 0;
}
