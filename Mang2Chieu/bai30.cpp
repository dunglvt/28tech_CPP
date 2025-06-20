#include <iostream>

using namespace std;

int n;
int a[22][22];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int dem = 0;

void loang(int x, int y){
	++dem; 
	a[x][y] = 1;
	for(int i = 0; i < 4; i++){
		int tmp_dx = x + dx[i];
		int tmp_dy = y + dy[i];
		if(tmp_dx >= 1 && tmp_dy >= 1 && tmp_dx <= n && tmp_dy <= n && a[tmp_dx][tmp_dy] == 0){
			loang(tmp_dx, tmp_dy);
		}
	}
}

int main(){
	cin >> n;
	int s, t; cin >> s >> t;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}

	loang(s, t);
	cout << dem;
	return 0;
}