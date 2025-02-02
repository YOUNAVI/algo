#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, v, tmp, ans = 0;
	cin >> N;
	int arr[201];
	fill(arr, arr + 201, 0);

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr[tmp + 100]++;
	}

	cin >> v;
	cout << arr[v + 100];

	return 0;

}