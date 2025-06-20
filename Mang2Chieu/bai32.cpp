#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
char a[113][113];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int dientich = 0;

void loang(int x, int y){
	++dientich;
	a[x][y] = '.';
	for(int i = 0; i < 4; i++){
		int tmp_dx = x + dx[i];
		int tmp_dy = y + dy[i];
		if(tmp_dx >= 1 && tmp_dy >= 1 && tmp_dx <= n && tmp_dy <= m && a[tmp_dx][tmp_dy] == '*'){
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

	vector<int> v;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == '*'){
				loang(i, j);
				v.push_back(dientich);
				dientich = 0;
			}
		}
	}
	sort(v.begin(), v.end());

	for(int i : v){
		cout << i << ' ';
	}
	return 0;
}