#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	int sum = 0;
	for(char x : s){
		sum += (x - '0');
	}
	cout << sum;
	return 0;
}