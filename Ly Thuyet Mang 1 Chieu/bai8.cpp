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
    ll n;
    cin >> n;
    ll a[n];
    FORL(i, 0, n-1){
    	cin >> a[i];
    }
    FORL(i, 0, n-1){
        int check = 1;
        FORL(j, 0, i-1){
            if (a[i] <= a[j])
            {
                check = 0;
                break;
            }
        }
        if (check)
        {
            cout << a[i] << ' ';
        }
    }
    return 0;
}
