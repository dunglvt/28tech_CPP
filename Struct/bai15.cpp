#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

struct web {
	string name;
	int fre;
};

bool cmp(web x, web y) {
	if (x.fre == y.fre) {
		return x.name < y.name;
	}
	return x.fre > y.fre;
}

int main() {
	string s;
	vector<web> v;
	while (getline(cin, s)) {
		vector<string> temp;
		stringstream ss(s);
		string tmp;
		while (ss >> tmp) {
			temp.push_back(tmp);
		}

		bool check = false;
		for (web &x : v) {
			if (temp[2] == x.name) {
				check = true;
				x.fre++;
				break;
			}
		}
		if (!check) {
			v.push_back({temp[2], 1});
		}
	}

	sort(v.begin(), v.end(), cmp);

	for (web x : v) {
		cout << x.name << ' ' << x.fre << endl;
	}
	return 0;
}