// 15964

#include <iostream>

using namespace std;

long calc(long a, long b) {
	return (a + b) * (a - b);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long n, m, answer;	

	cin >> n >> m;

	answer = calc(n, m);

	cout << answer;

	return 0;
}
