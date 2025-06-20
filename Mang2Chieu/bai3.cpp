#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, m; cin >> n >> m;

	int a[n][m];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

	int maxValue = -1e9;
	int minValue = 1e9;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			maxValue = max(maxValue, a[i][j]);
			minValue = min(minValue, a[i][j]);
		}
	}

	cout << minValue << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == minValue){
				cout << i + 1 << ' ' << j + 1 << endl;
			}
		}
	}

	cout << maxValue << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == maxValue){
				cout << i + 1 << ' ' << j + 1 << endl;
			}
		}
	}
	return 0;
}