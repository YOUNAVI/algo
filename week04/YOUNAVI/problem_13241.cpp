// 13241

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long int a, b, m, result;
	
	cin >> a >> b;

	if (a > b) {
		for (int j = 1; (a * j) <= (a * b); j++) {
			m = a * j;
			if (m % b == 0) {
				result = m;
				break;
			}

		}
	}
	else {
		for (int j = 1; (b * j) <= (a * b); j++) {
			m = b * j;
			if (m % a == 0) {
				result = m;
				break;
			}

		}
	}

	cout << result;

	return 0;
}