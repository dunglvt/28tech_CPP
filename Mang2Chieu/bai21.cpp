#include <iostream>

using namespace std;

int n;
int a[102][102];

int dx[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dy[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

void loang(int x, int y){
	a[x][y] = 0;
	for(int i = 0; i < 8; i++){
		int tmp_dx = x + dx[i];
		int tmp_dy = y + dy[i];
		if(tmp_dx >= 1 && tmp_dy >= 1 && tmp_dx <= n && tmp_dy <= n && a[tmp_dx][tmp_dy] == 1){
			loang(tmp_dx, tmp_dy);
		}
	}
}

int main(){
	cin >> n;

	int s, t, u, v;
	cin >> s >> t >> u >> v;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}

	if(a[s][t]){
		loang(s, t);
	}

	if(a[u][v] == 0){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}