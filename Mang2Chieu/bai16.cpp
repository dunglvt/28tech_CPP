#include <iostream>

using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int a[50][50];
int n, m;

void loang(int x, int y){
	a[x][y] = 0;
	for(int i = 0; i < 4; i++){
		int tmp_dx = x + dx[i];
		int tmp_dy = y + dy[i];
		if(a[tmp_dx][tmp_dy] == 1 && tmp_dx <= n && tmp_dy <= m && tmp_dx >= 1 && tmp_dy >= 1){
			loang(tmp_dx, tmp_dy);
		}
	}
}

int main(){
	cin >> n >> m;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}

	int cnt = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 1){
				++cnt;
				loang(i, j);
			}
		}
	}

	cout << cnt;
	return 0;
}	
