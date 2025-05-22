#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v(n);
	
	for(int &x : v){
		cin >> x;
	}
	
	for(vector<int>::iterator x = v.begin(); x != v.end() - 1;){
		vector<int>::iterator k = x + 1;
		
		if(*x == *k){
			v.erase(k);
		} else {
			++x;
		}
	}
	
	for(int x : v){
		cout << x << ' ';
	}
	return 0;
}
