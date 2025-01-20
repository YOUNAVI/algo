#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int func4(int N);

int main() {

	cout << func4(5) << "\n";
	cout << func4(97615282) << "\n";
	cout << func4(1024) << "\n";

	return 0;
}

// Answer Code
int func4(int N) {

	int ret = 1;

	while (2 * ret <= N) {
		ret *= 2;
	}

	return ret;

}

/* My Code
int func4(int N) {

	int ret = 1;

	while (ret <= N) {
		ret *= 2;
	}

	return ret / 2;

}
*/

// O(logN)