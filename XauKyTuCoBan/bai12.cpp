#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s; 
	getline(cin, s);

	int cnt = 0;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp){
		bool check = true;
		for(char x : tmp){
			if(!isupper(x)){
				check = false; 
				break;
			}
		}
		if(check){
			++cnt;
		}
	}

	cout << cnt;
	return 0;
}