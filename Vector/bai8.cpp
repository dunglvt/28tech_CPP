#include <iostream>
#include <vector>

#define fi first
#define se second

using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<pair<int, int>, int>> v(n);
	
	for(auto &x : v){
		cin >> x.fi.fi >> x.fi.se >> x.se; 
	}
	
	for(auto x : v){
		cout << x.fi.fi + x.fi.se + x.se << ' ';
	}
}
