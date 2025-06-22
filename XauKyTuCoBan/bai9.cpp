#include <iostream>

using namespace std;

int main(){
	string s; cin >> s;
	int k; cin >> k;
	s = s.insert(k , "28tech");
	cout << s;
	return 0;
}
