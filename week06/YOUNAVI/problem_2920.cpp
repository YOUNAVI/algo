// 2920

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int note[8];
	int count = 0;

	for (int i = 0; i < 8; i++) {
		cin >> note[i];
	}
	for (int i = 0; i < 8; i++) {
		if (note[i] == (i + 1))
			count++;
		else if (note[i] == 8 - i)
			count--;
	}

	switch (count) {
	case 8:
		cout << "ascending";
		break;
	case -8:
		cout << "descending";
		break;
	default:
		cout << "mixed";
		break;
	}

	return 0;
}
