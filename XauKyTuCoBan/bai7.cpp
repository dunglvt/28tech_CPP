#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;

	string sDigit;
	string salpha;

	for(char x : s){
		if(isdigit(x)){
			sDigit += x;
		} else {
			salpha += x;
		}
	}
	cout << sDigit << endl << salpha;
	return 0;
}