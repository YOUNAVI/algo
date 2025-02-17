// 2444

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j -= 1) {
			cout << " ";
		}

		for (int j = 0; j <= 2 * i; j += 1) {
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 2 * (n - i) - 1; j > 0; j--) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;

}