#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int diff, x, y, sum = 0;
	int a[9];

	for (int i = 0; i < 9; i++) {

		cin >> a[i];
		sum += a[i];

	}

	diff = sum - 100;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (a[i] + a[j] == diff) {
				x = a[i];
				y = a[j];
				break;
			}
		}
	}

	sort(a, a + 9);

	for (int i = 0; i < 9; i++) {
		if (a[i] != x && a[i] != y) {
			cout << a[i] << "\n";
		}
	}

	return 0;
}