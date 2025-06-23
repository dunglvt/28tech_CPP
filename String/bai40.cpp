#include <iostream>

using namespace std;

#define MOD 5;

int main(){
	string s; cin >> s;

	long long res = 0;
	int SIZE = s.size();

	long long f[1001] = {0};
	f[0] = 1;
	for(int i = 1; i <= 1000; i++){
		f[i] = (f[i-1]*2) % MOD;
		f[i] %= MOD;
	}
	for(int i = 0; i < (int)s.size(); i++){
		res += 1ll * (s[i] - '0') * (f[SIZE-i]);
		res %= MOD;
	}

	if(res % 5 == 0){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}