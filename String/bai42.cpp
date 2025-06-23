#include <iostream>

using namespace std;

int main(){
	string s, m; cin >> s >> m;
	long long r = 0;
	for(char x : s){
		r = r * 10 + (x - '0');
		r %= stoll(m);
	}
	cout << r;
	return 0;
}