#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s; getline(cin, s);

	stringstream ss(s);
	string tmp;
	int cnt = 0;

	while(ss >> tmp){
		for(char &x : tmp){
			x = tolower(x);
		}
		if(tmp == "28tech"){
			++cnt;
		}
	}

	cout << cnt;
	return 0;
}