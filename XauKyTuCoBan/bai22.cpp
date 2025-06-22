#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	char a[n];
	for(char &x :a){
		cin >> x;
	}

	string res;
	for(char x : a){
		res += x;
	}
	cout << res;
	return 0;
}