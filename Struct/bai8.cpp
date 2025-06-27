#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
using namespace std;

struct sinhvien {
	string name, date, address;
	double gpa;

	friend istream& operator >> (istream &in, sinhvien &x) {
		getline(in, x.name);
		getline(in, x.date);
		getline(in, x.address);
		cin >> x.gpa;
		return in;
	}
};

bool cmp(sinhvien x, sinhvien y) {
	if (x.address == y.address) {
		return x.gpa > y.gpa;
	}
	return x.address < y.address;
}

int main() {
	int n; cin >> n;
	vector<sinhvien> v(n);

	for (int i = 0; i < n; i++) {
		cin.ignore(1);
		cin >> v[i];
	}

	sort(v.begin(), v.end(), cmp);

	for (sinhvien x : v) {
		cout << x.name << ' ' << x.date << ' ' << x.address  << ' ' << fixed << setprecision(2) << x.gpa << endl;
	}
	return 0;
}