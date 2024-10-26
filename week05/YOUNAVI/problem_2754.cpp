// 2754

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string a;
	float score;

	cin >> a;
	cout << fixed;
	cout.precision(1);

	if (a[0] == 'A') {
		score = 4.0;
	}
	else if (a[0] == 'B') {
		score = 3.0;
	}
	else if (a[0] == 'C') {
		score = 2.0;
	}
	else if (a[0] == 'D') {
		score = 1.0;
	}
	else if (a[0] == 'F') {
		cout << 0.0;
		return 0;
	}

	if (a[1] == '+') {
		score += 0.3;
	}
	else if (a[1] == '-') {
		score -= 0.3;
	}

	cout << score;

	return 0;
}