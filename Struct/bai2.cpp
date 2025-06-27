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

struct soPhuc {
	int thuc;
	int ao;

	soPhuc() {
		thuc = 0;
		ao = 0;
	}

	soPhuc(int x, int y) {
		thuc = x;
		ao = y;
	}

	friend soPhuc operator + (soPhuc x, soPhuc y) {
		int t = x.thuc + y.thuc;
		int a = x.ao + y.ao;
		return soPhuc(t, a);
	}

	friend soPhuc operator - (soPhuc x, soPhuc y) {
		int t = x.thuc - y.thuc;
		int a = x.ao - y.ao;
		return soPhuc(t, a);
	}

	friend soPhuc operator * (soPhuc x, soPhuc y) {
		int t = x.thuc * y. thuc - x.ao * y.ao;
		int a = x.thuc * y.ao + y.thuc * x.ao;
		return soPhuc(t, a);
	}

	friend istream& operator >> (istream &in, soPhuc &x) {
		in >> x.thuc >> x.ao;
		return in;
	}

	friend ostream& operator << (ostream &out, const soPhuc &x) {
		out << x.thuc << ' ' << x.ao;
		return out;
	}
};

int main() {

	fastIO;

	//code here
	soPhuc a[2];
	for (auto &x : a) {
		cin >> x;
	}
	cout << a[0] + a[1] << endl;
	cout << a[0] - a[1] << endl;
	cout << a[0] * a[1] << endl;
	return 0;
}
