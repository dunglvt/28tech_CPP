#include <iostream>
#include <vector>

using namespace std;

bool utChan(vector<int> v){
	int cntEven = 0;
	int cntOdd = 0;
	for(int x : v){
		if(x & 1 ){
			++cntOdd;
		} else {
			++cntEven;
		}
	}
	return (v.size() % 2 == 0) && (cntEven > cntOdd);
}

bool utLe(vector<int> v){
	int cntEven = 0;
	int cntOdd = 0;
	for(int x : v){
		if(x & 1 ){
			++cntOdd;
		} else {
			++cntEven;
		}
	}
	return (v.size() & 1) && (cntEven < cntOdd);
}

int main(){
	int n;
	vector<int> v;
	while(cin >> n){
		v.push_back(n);
	}
	if(utChan(v) || utLe(v)){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}
