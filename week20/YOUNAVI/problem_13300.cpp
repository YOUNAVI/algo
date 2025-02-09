#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, K, gen, grade, ans = 0;
	int arr[13];
	fill(arr, arr + 13, 0);

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> gen >> grade;

		arr[(6 * gen) + grade]++;

	}

	for (int i = 1; i < 13; i++) {
		ans += (arr[i] + K - 1) / K;
	}

	cout << ans;

	return 0;

}