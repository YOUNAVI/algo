#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tmp, index, max = 0;
	
	for (int i = 0; i < 9; i++) {
		cin >> tmp;

		if (tmp > max) {
			max = tmp;
			index = i + 1;
		}
	}

	cout << max << "\n" << index;

	return 0;
}