#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <algorithm>

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

int main() {
	int n; cin >> n;
	vector<sinhvien> v(n);
	map<string, int> m;

	for (int i = 0; i < n; i++) {
		cin.ignore(1);
		cin >> v[i];
		m[v[i].address]++;
	}

	int maxSecond = 0;;
	for (pair<string, int> x : m) {
		maxSecond = max(maxSecond, x.second);
	}

	for (auto x : m) {
		if (x.second == maxSecond)
		{
			cout << x.first << endl;
		}
	}
	return 0;
}
