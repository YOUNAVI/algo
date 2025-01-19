#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int func3(int N);

int main() {

	cout << func3(9) << "\n";
	cout << func3(693953651) << "\n";
	cout << func3(756580036) << "\n";

	return 0;
}

// Answer Code
int func3(int N) {

	for (int i = 1; i * i <= N; i++) {
		if (i * i == N) {
			return 1;
		}
	}
	return 0;

}

/* My Code
int func3(int N) {

	for (int i = 1; i < N / 2; i++) {
		if (i * i == N) {
			return 1;
		}
	}
	return 0;

}
*/

// O(sqrt(N))