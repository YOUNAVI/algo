#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Answer Code
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, ans = 0;
	int arr[10];
	fill(arr, arr + 10, 0);

	cin >> N;

	while (N > 0) {
		arr[N % 10]++;
		N /= 10;
	}

	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9) continue;
		ans = max(ans, arr[i]);
	}

	ans = max(ans, (arr[6] + arr[9] + 1) / 2);
	// (ceil(arr[6] + arr[9] / 2) = (arr[6] + arr[9] + 1) / 2
	cout << ans;

	return 0;

}

/* My code
int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, max = 0;
	int arr[9];
	fill(arr, arr + 9, 0);

	cin >> N;

	while (N > 0) {

		if (N % 10 == 9) {
			arr[6]++;
			N /= 10;
		}
		
		else {
			arr[N % 10]++;
			N /= 10;
		}
	}

	arr[6] = (arr[6] % 2) + (arr[6] / 2);

	for (int i = 0; i < 9; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	cout << max << "\n";

	return 0;

}
*/