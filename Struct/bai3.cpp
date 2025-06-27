#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FORL(i,l,r) for(auto i = l; i <= r; i++)
#define FORR(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

struct diem {
	int toan;
	int ly;
	int hoa;
	int tong() {
		return toan + ly + hoa;
	}
};

struct sinhVien {
	string name;
	string date;
	string country;
	diem score;
};

bool cmp(sinhVien x, sinhVien y) {
	return x.score.tong() > y.score.tong();
}

int main() {

	fastIO;

	//code here
	int n; cin >> n;
	vector<sinhVien> v(n);

	for (int i = 0; i < n; i++) {
		cin.ignore(1);
		getline(cin, v[i].name);
		getline(cin, v[i].date);
		getline(cin, v[i].country);
		cin >> v[i].score.toan >> v[i].score.ly >> v[i].score.hoa;
	}
	vector<sinhVien> v1(v.begin(), v.end());
	stable_sort(v.begin(), v.end(), cmp);

	int maxScore = v.front().score.tong();
	cout << "DANH SACH THU KHOA :\n";
	for (sinhVien x : v) {
		if (x.score.tong() == maxScore) {
			cout << x.name << ' ' << x.date << ' ' << x.country << ' ' << x.score.tong() << endl;
		}
	}

	cout << "KET QUA XET TUYEN:\n";
	for (sinhVien x : v1) {
		cout << x.name << ' ' << x.date << ' ' << x.country << ' ' << x.score.tong() << ' ';
		if (x.score.tong() >= 24) {
			cout << "DO" << endl;
		} else {
			cout << "TRUOT" << endl;
		}
	}
	return 0;
}
