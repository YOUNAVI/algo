// 1934

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t, a, b, m, max;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;

		if (a > b) {
			for (int j = 1; (a * j) <= (a * b); j++) {
				m = a * j;
				if (m % b == 0) {
					max = m;
					break;
				}

			}
		}
		else {
			for (int j = 1; (b * j) <= (a * b); j++) {
				m = b * j;
				if (m % a == 0) {
					max = m;
					break;
				}

			}
		}

		cout << max << "\n";
	}

	return 0;
}