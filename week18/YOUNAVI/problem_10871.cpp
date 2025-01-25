#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N, X, tmp;
	cin >> N >> X;
	
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		if (tmp < X)
			cout << tmp << " ";
	}

	return 0;
}