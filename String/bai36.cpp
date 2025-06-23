#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	int SIZE = s.size();

	int c = s[SIZE - 1] - '0';
	int b = s[SIZE - 2] - '0';

	int sc = b*10 + c;
	if(SIZE == 1 && (s[0] - '0') % 4 == 0){
		cout << "YES";
		return 0;
	} 

	if(sc % 4 == 0){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}