#include <iostream>
#include <algorithm>
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

int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(abs(b), abs(a % b));
}


int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

struct phanSo {
	int tu;
	int mau;
	phanSo() {

	}
	phanSo(int t, int m) {
		tu = t;
		mau = m;
		if (mau < 0) {
			mau = mau * -1;
			tu = tu * -1;
		}
		rugon();
	}

	void rugon() {
		int temp = gcd(tu, mau);
		tu /= temp;
		mau /= temp;
	}

	friend phanSo operator + (phanSo x, phanSo y) {
		int mc = lcm(x.mau, y.mau);
		int tc = mc / x.mau * x.tu + mc / y.mau * y.tu;
		return phanSo(tc, mc);
	}

	friend phanSo operator - (phanSo x, phanSo y) {
		int mc = lcm(x.mau, y.mau);
		int tc = mc / x.mau * x.tu - mc / y.mau * y.tu;
		return phanSo(tc, mc);
	}

	friend istream& operator >> (istream &in, phanSo &x) {
		in >> x.tu >> x.mau;
		x.rugon();
		return in;
	}

	friend ostream& operator << (ostream &out, const phanSo &x) {
		out << x.tu << '/' << x.mau;
		return out;
	}

};

int main() {

	fastIO;

	//code here
	phanSo a[2];
	for (int i = 0; i < 2; i++) {
		cin >> a[i];
	}
	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[0] + a[1] << endl;
	cout << a[0] - a[1] << endl;
	return 0;
}

