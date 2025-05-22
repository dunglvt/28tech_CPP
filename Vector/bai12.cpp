#include <iostream>
#include <vector>

using namespace std;

void reverse_Vector(vector<int> &v){
	for(int i = 0; i < (int)v.size() / 2; i++){
		swap(v[i], v[v.size() - i - 1]);
	}
}

int main(){
	int n; cin >> n;
	vector<int> v(n);
	
	for(int &x : v){
		cin >> x;
	}
	
	reverse_Vector(v);
	
	for(int x : v){
		cout << x << ' ';
	}
	return 0;
}
