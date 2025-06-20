#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

bool isPrime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}

int main(){
	int n;
	map<int, int> m;
	vector<int> v;

	while(cin >> n){
		if(isPrime(n)){
			if(m[n] == 0){
				v.push_back(n);
			} 
			m[n]++;
		}
	}

	for(int i : v){
		cout << i << ' ' << m[i] << endl;
	}
	return 0;
}	