#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, tmp, y = 0, m = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		y += ((tmp / 30) + 1) * 10;
		m += ((tmp / 60) + 1) * 15;
	}

	if (y == m) cout << "Y M " << y;
	else if (y > m) cout << "M " << m;
	else cout << "Y " << y;

	return 0;
}