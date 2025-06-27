#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct word {
	string data;
	int fre;
};

bool cmp(word x, word y) {
	if (x.fre == y.fre) {
		return x.data > y.data;
	}
	return x.fre < y.fre;
}

int main() {
	string s;
	vector<word> v;
	while (cin >> s) {
		bool check = false;
		for (word &x : v) {
			if (x.data == s) {
				check = true;
				++x.fre;
				break;
			}
		}
		if (!check) {
			v.push_back({s, 1});
		}
	}

	sort(v.begin(), v.end(), cmp);

	cout << v[v.size() - 1].data;
	return 0;
}