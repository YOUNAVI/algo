#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int func2(int arr[], int N);

int main() {

	int a1[] = { 1, 52, 48 };
	int a2[] = { 50, 42 };
	int a3[] = { 4, 13, 63, 87 };

	cout << func2(a1, 3) << "\n";
	cout << func2(a2, 2) << "\n";
	cout << func2(a3, 4) << "\n";

	return 0;
}

int func2(int arr[], int N) {

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 100) {
				return 1;
			}
		}
	}

	return 0;

}

// O(N^2)