// 1735

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d, e, f, r;
	
	cin >> a >> b;
	cin >> c >> d;

	e = (a * d) + (b * c);
	f = b * d;

	if (f > e) {
		int tmp = e;
		e = f;
		f = tmp;
	}
	
	while (f != 0) {
		r = e % f;
		e = f;
		f = r;
	}

	int gcd = e;

	e = ((a * d) + (b * c)) / gcd;
	f = (b * d) / gcd;
	
	cout << e << " " << f;

	return 0;
}