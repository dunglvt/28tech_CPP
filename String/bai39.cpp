#include <iostream>
#include <cmath>
using namespace std;

int main(){
	string s; cin >> s;

	int sumEven = 0;
	int sumOdd = 0;
	for(int i = 0; i < (int)s.size(); i++){
		if((i) & 1){
			sumOdd += (s[i] - '0');
		} else {
			sumEven += (s[i] - '0');
		}
	}

	if(abs(sumEven - sumOdd) % 11 == 0){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}