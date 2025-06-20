#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int a[111][111];
bool visted[111][111];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int chuvi = 0;

void loang(int x, int y){
	visted[x][y] = true; 
	int cnt = 0;
	for(int i = 0; i < 4; i++){
		int tmp_dx = x + dx[i];
		int tmp_dy = y + dy[i];
		if(tmp_dx >= 1 && tmp_dy >= 1 && tmp_dx <= n && tmp_dy <= m && a[tmp_dx][tmp_dy] == 1){
			++cnt;

			if(!visted[tmp_dx][tmp_dy]) {
				loang(tmp_dx, tmp_dy);
			}
		}
	}
	chuvi += 4 - cnt;
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
			if(!visted[i][j] && a[i][j]){
				loang(i, j);
				v.push_back(chuvi);
				chuvi = 0;
			}
		}
	}

	sort(v.begin(), v.end());

	cout << *v.rbegin();
	return 0;
}
