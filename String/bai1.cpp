#include <iostream>
#include <string>

using namespace std;

int main(){
	string s; 
	getline(cin, s);

	int digit = 0;
	int alpha = 0;
	int sp = 0;
	for(char x : s){
		if (isdigit(x))	
		{
			++digit;
		} else if(isalpha(x)){
			++alpha;
		} else {
			++sp;
		}
	}

	cout << alpha << ' ' << digit << ' ' << sp << endl;
	return 0;
}