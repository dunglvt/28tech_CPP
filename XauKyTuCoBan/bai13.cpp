#include <iostream>
#include <sstream>

using namespace  std;

int main(){
	string s;
	getline(cin, s);

	for(char &x : s){
		if(x == '?' || x == ',' || x == '.' || x == '!'){
			x = ' ';
		}	
	}

	stringstream ss(s);
	string tmp;

	while(ss >> tmp){
		cout << tmp << ' ';
	}
	return 0;
}