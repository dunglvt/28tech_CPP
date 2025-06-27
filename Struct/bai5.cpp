#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;

struct sinhvien {
	string name, date, address;
	double gpa;
};

bool cmp(sinhvien x, sinhvien y) {
	return x.name < y.name;
}

int main() {
	int n; cin >> n;
	vector<sinhvien> v(n);
	for (int i = 0; i < n; i++) {
		cin.ignore(1);
		getline(cin, v[i].name);
		getline(cin, v[i].date);
		getline(cin, v[i].address);
		cin >> v[i].gpa;
	}

	stable_sort(v.begin(), v.end(), cmp);

	for (sinhvien x : v) {
		cout << x.name << ' ' << x.date << ' ' << x.address << ' ' << fixed << setprecision(2) << x.gpa << endl;
	}
	return 0;
}