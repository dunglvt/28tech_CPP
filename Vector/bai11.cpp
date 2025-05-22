#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return n > 1;
}

vector<int> prime_List(vector<int> v){
	vector<int> result;
	
	for(int x : v){
		if(isPrime(x)){
			result.push_back(x);
		}
	}
	return result;
}

void nhap(vector<int> &v){
	for(int &x : v){
		cin >> x;
	}
}

void in(vector<int> v){
	for(int x : v){
		cout << x << ' ';
	}
}

int main(){
	int n; cin >> n;
	vector <int> v(n);
	nhap(v);
	vector<int> result = prime_List(v);
	
	in(result);
	return 0;
}
