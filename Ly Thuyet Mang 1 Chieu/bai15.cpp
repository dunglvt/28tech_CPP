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
    char a[n], na[1001], p[1001];
    int j = 0, k = 0;
    FORL(i, 0, n-1){
    	cin >> a[i];
    	char t = tolower(a[i]);
    	if (t == 'u' || t == 'e' || t == 'o' || t == 'a' || t == 'i')
    	{
    		na[j++] = t;
    	} else {
    		p[k++] = t;
    	}
    }
    FORL(i, 0, j-1){
    	cout << na[i] << ' ';
    }
    cout << endl;
    FORR(i, k-1, 0){
    	cout << p[i] << ' '; 
    }
    return 0;
}
