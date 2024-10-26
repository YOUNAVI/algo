// 2475

#include <iostream>

using namespace std;

int calc(int a, int b, int c, int d, int e) {
	return ((a * a) + (b * b) + (c * c) + (d * d) + (e * e)) % 10;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e;

	f = calc(a, b, c, d, e);

	cout << f;

	return 0;
}
