#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct word
{
	string data;
	int fre;
};

bool cmp(word x, word y) {
	if (x.fre == y.fre) {
		return x.data < y.data;
	}
	return x.fre > y.fre;
}

int main() {
	string s;
	vector<word> v;
	while (cin >> s) {
		string resources[4] = {"good", "bad", "wonderful", "terrible"};
		for (string x : resources) {
			if (s.find(x) != string::npos) {
				bool check = false;
				for (word &k : v) {
					if (k.data == x) {
						++k.fre;
						check = true;
						break;
					}
				}
				if (!check) {
					v.push_back({x, 1});
				}
			}
		}
	}

	sort(v.begin(), v.end(), cmp);

	for (word x : v) {
		cout << x.data << ' ' << x.fre << endl;
	}
	return 0;
}