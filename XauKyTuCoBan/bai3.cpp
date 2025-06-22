#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	int sum = 0;
	for(char x : s){
		if(isdigit(x)){
			sum += x - '0';
		}
	}
	cout << sum;
	return 0;
}