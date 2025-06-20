#include <iostream>

using namespace std;

int a[111][111];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

long long sumValue(int x, int y){
	long long sum = a[x][y];
	for(int i = 0; i < 8; i++){
		int tmp_dx = x + dx[i];
		int tmp_dy = y + dy[i];
		sum += a[tmp_dx][tmp_dy];
	}
	return sum;
}

int main(){
	int n; cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}

	long long ans = 0;
	for(int i = 2; i <= n-1; i++){
		for(int j = 2; j <= n-1; j++){
			long long sum = 0;
			sum += sumValue(i, j);
			ans = max(ans, sum);
		}
	}
	cout << ans;
	return 0;

}