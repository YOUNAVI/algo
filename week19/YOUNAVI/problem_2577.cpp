#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int A, B, C, mul, tmp;
	int arr[10];
	fill(arr, arr + 10, 0);

	cin >> A >> B >> C;

	mul = A * B * C;

	while (mul > 0) {
		tmp = mul % 10;
		arr[tmp]++;
		mul /= 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;

}