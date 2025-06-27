#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct word {
	string data;
	int fre;
};

bool dx(string s) {
	int i = 0;
	while (i < (int)s.size() / 2) {
		if (s[i] != s[s.size() - i - 1]) {
			return false;
		}
		i++;
	}
	for (char x : s) {
		if ((x - '0') & 1) {
			return false;
		}
	}
	return true;
}

bool cmp(word x, word y) {
	return x.fre > y.fre;
}

int main() {
	string s;
	vector<word> v;
	while (cin >> s) {
		if (dx(s)) {
			bool check = false;
			for (word &x : v) {
				if (x.data == s) {
					++x.fre;
					check = true;
					break;
				}
			}
			if (!check) {
				v.push_back({s, 1});
			}
		}
	}

	stable_sort(v.begin(), v.end(), cmp);

	for (word x : v) {
		cout << x.data << ' ' << x.fre << endl;
	}
	return 0;
}
