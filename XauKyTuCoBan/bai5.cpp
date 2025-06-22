#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	string res = s;
	int k = 0;
	for(int i = s.length(); i >= 0; i--){
		if(k % 3 == 0 && k != 0 && k != s.length()){
			res.insert(i, ",");
		}
		k++;
	}
	cout << res;
	return 0;
}