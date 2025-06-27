#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

struct sinhvien {
	string name, date, address;
	double gpa;
};

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

	string temp = "Nam Dinh";
	for (sinhvien x : v) {
		if (x.address == temp && x.gpa >= 2.5) {
			cout << x.name << ' ' << x.date << ' ' << x.address << ' ' << fixed << setprecision(2) << x.gpa << endl;
		}
	}
	return 0;
}