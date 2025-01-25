#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Answer Code
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tmp, result = 0, odd = 0, min = 100;

	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		
		if (tmp & 1) { // check odd number
			odd++;
			result += tmp;

			if (tmp < min) {
				min = tmp;
			}
		}
	}
	
	if (odd) cout << result << "\n" << min;
	else cout << -1;


	return 0;
}

/*
My Code
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tmp, result = 0;
	int arr[7] = { 101, 101, 101, 101, 101, 101, 101 };

	for (int i = 0; i < 7; i++) {
		cin >> tmp;
		if (tmp % 2 == 1) {
			result += tmp;
			arr[i] = tmp;
		}
	}
	if (result == 0)
		cout << -1;
	else {
		sort(arr, arr + 7);
		cout << result << "\n" << arr[0];
	}

	return 0;
}
*/