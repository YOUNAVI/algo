// 2420

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long n, m;

	cin >> n >> m;

	cout << abs(n - m);

	return 0;
}