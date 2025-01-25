#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Answer Code
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long a, b;
	cin >> a >> b;

	if (a > b) swap(a, b);

	if (a == b) cout << 0 << "\n";
	else {
		cout << b - a - 1 << "\n";
		for (long long i = a + 1; i < b; i++)
			cout << i << " ";
	}

	return 0;
}

/* my code
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long a, b, little, big, n;
	cin >> a >> b;

	little = min({ a, b });
	big = max({ a, b });
	n = big - little - 1;

	if (a == b) cout << 0 << "\n";
	else cout << n << "\n";

	for (long long i = little + 1; i < big; i++) {
		cout << i << " ";
	}

	return 0;
}
*/