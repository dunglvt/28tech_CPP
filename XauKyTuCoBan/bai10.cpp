#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	bool check = false;
	int cnt[256] = {0};

	for(char x : s){
		++cnt[x];
		if(cnt[x] > 1){
			cout << (char)x;
			check = true;
			return 0;
		}
	}
	if(!check){
		cout << "NONE";
	}
	return 0;
}