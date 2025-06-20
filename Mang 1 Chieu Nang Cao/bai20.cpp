#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, k; cin >> n >> k;
	int a[n];
	
	for(int &i:a){
		cin >> i;
	}
	
	long long sum = 0;
	for(int i = 0;i < k ;i++){
		sum += a[i];
	}
	
	long long maxSum = sum;
	int pos = 0;
	for(int i = 1; i <= n-k; i++){
		sum = sum + a[i+k-1] - a[i-1];
		if(sum > maxSum){
			maxSum = sum;
			pos = i;
		}
	}
	
	cout << maxSum << endl;
	for(int i = pos; i < pos+k; i++){
		cout << a[i] << ' ';
	}
	return 0;
}

