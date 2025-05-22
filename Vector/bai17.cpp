#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<char> convert_Number(long long n){
	vector<char> result(64);
	
	for(char &x : result){
		if(n & 1){
			x = '1';
		} else {
			x = '0';
		}
		n /= 2;
	}
	reverse(result.begin(), result.end());
	return result;
}

int main(){
	int t;
	long long n;
	cin >> t;
	
	while(t--){
		cin >> n;
		vector<char> binary = convert_Number(n);
		for(char x : binary){
			cout << x;
		}
		cout << endl;
	}
	return 0;
}
