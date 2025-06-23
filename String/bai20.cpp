#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;

	int i = 0;
	int j = 0;
	string temp = "python";

	int SIZE = s.size();
	while(i < SIZE){
		if(s[i] == temp[j]){
			++i;
			++j;
		} else {
			++i;
		}
	}
	int SIZE1 = temp.size();
	if(j < SIZE1){
		cout << "NO";
	} else {
		cout << "YES";
	}
	return 0;
}