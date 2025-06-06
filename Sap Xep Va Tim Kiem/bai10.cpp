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
    int n, x; cin >> n >> x;
    int a[n];
    for(int &i:a){
    	cin >> i;
    }	

    int *pos1 = lower_bound(a, a+n, x);
    if(pos1 != a+n && *pos1 == x){
    	cout << pos1 - a << endl;
    } else {
    	cout << -1 << endl;
    }

    int *pos2 = upper_bound(a, a+n, x);
    if(pos2 != a && *(pos2-1) == x){
    	cout << pos2 - a - 1 << endl;
    } else {
    	cout << -1 << endl;
    }

    int *pos3 = lower_bound(a, a+n, x);
    if(pos3 != a+n){
    	cout << pos3 - a << endl;
    } else {
    	cout << -1 << endl;
    }

	int *pos4 = upper_bound(a, a+n, x);
    if(pos4 != a+n){
    	cout << pos4 - a << endl;
    } else {
    	cout << -1 << endl;
    }


    if(pos1 != a+n && *pos1 == x && (pos2) != a && *(pos2 - 1) == x){
    	cout << pos2 - pos1 << endl;
    } else {
    	cout << 0;
    }
    return 0;
}
