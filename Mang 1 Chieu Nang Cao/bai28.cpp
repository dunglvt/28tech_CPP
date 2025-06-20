#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &i:a){
		cin >> i;
	}
	
	sort(a, a+n);
	long long sum = 0;
	for(int i = 0;i<n;i++){
		sum += (1ll*i*a[i])%1000000007;
		sum %= 1000000007;
	}
	cout << sum;
}
