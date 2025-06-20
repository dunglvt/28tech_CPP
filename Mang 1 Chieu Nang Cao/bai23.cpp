#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n],b[n];
	
	for(int &i:a){
		cin >> i;
	}
	
	for(int &i : b){
		cin >> i;
	}
	
	sort(a, a+n);
	sort(b, b+n, greater<int>());
	
	int c[n+n];
	int j = 0, k = 0;
	for(int i = 0; i< n+n; i+=2){
		c[i] = a[j++]; 
	}
	
	for(int i = 1; i< n+n; i+=2){
		c[i] = b[k++]; 
	}
	
	for(int i : c){
		cout << i << ' ';
	}
	return 0;
}
