#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>

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

	for (int i = 0; i < n; i++) {
		cin.ignore(1);
		cin >> v[i];
	}
	for (sinhvien x : v) {
		vector<int> sinh;
		stringstream ss(x.date);
		string temp;
		while (getline(ss, temp, '/')) {
			sinh.push_back(stoi(temp));
		}

		if (sinh[1] == 4) {
			cout << x.name << ' ' << x.date << ' ' << x.address << ' ' << fixed << setprecision(2) << x.gpa << endl;
		}
	}
	return 0;
}