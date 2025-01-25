#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Answer Code
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;

	cin >> a >> b >> c;

	if (a == b && b == c)
		cout << 10000 + (a * 1000);
	else if (a == b || b == c)
		cout << 1000 + (b * 100);
	else if (a == c)
		cout << 1000 + (a * 100);
	else
		cout << max({ a, b, c }) * 100;

	return 0;
}

/*
My Code
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, tmp;

	cin >> a >> b >> c;

	if (a == b && b == c) {
		cout << 10000 + (a * 1000);
	}
	else if (a == b || b == c) {
		cout << 1000 + (b * 100);
	}
	else if (a == c) {
		cout << 1000 + (a * 100);
	}
	else {
		tmp = a;
		if (b > tmp)
			tmp = b;
		
		if (c > tmp)
			tmp = c;

		cout << tmp * 100;
	}

	return 0;
}
*/