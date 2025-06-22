#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
	string s; getline(cin, s);

	stringstream ss(s);
	string tmp;

	int i = 1;
	while(ss >> tmp){
		if(i & 1){
			cout << tmp << ' ';
		} else {
			reverse(tmp.begin(), tmp.end());
			cout << tmp << ' ';
		}
		i++;
	}
	return 0;
}