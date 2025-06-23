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

bool cmp(string x, string y){
	return x+y > y+x;
}

int main(){
    
    fastIO;
    
    //code here
    int n; cin >> n;
    vector<string> v;
    for(int i = 0 ; i < n; i++){
    	string s;
    	cin >> s;
    	v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);

    for(string x : v){
    	cout << x;
    }
    return 0;
}
