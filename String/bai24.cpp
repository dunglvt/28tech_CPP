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
    string s; cin >> s;	
    int cnt[256] = {0};

    for(char x : s){
    	cnt[x]++;
    }

    long long res = 0;
    for(int i = 0; i < 256; i++){
    	if(cnt[i] >= 1){
    		res += cnt[i];
    		res += 1ll *cnt[i] * (cnt[i] - 1)/2;
    	}
    }
    cout << res;
    return 0;
}
