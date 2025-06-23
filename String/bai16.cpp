#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	stringstream ss(s1);
	string tmp, res;

	while(ss >> tmp){
		for(char &x : tmp){
			x = tolower(x);
		}
		tmp[0] = toupper(tmp[0]);
		res += tmp + ' ';
	}

	if(s2[1] == '/'){
		s2 = '0' + s2;
	}
	if(s2[4] == '/'){
		s2.insert(3, "0");
	}

	cout << res  << endl;
	cout << s2 << endl;
	return 0;
}	