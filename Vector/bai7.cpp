#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<int, int>> v(n);
	
	for(pair<int, int> &x : v){
		cin >> x.first >> x.second;
	}
	
	for(pair<int, int> x : v){
		cout << fixed << setprecision(2) << sqrt(pow(x.first, 2) + pow(x.second, 2)) << ' ';
	}
	return 0;
}
