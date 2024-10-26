// 10872

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	long answer = 1;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		answer *= i;
	}

	cout << answer;

	return 0;
}