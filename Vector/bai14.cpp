#include <iostream>
#include <vector>
#include <ctype.h>

using namespace std;

int main(){
	char c;
	vector <char> v;
	
	while(cin >> c){
		if(islower(c)){
			c = toupper(c);
		} else if(isupper(c)){
			c = tolower(c);
		}
		v.push_back(c);
	}
	
	for(char x : v){
		cout << x << ' ';
	}
	return 0;
}
