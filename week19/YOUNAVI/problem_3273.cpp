#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, x, ans = 0;
	cin >> n;
	vector<int> arr(n, 0);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> x;
	vector<int> check(x, 0);

	for (int i = 0; i < n; i++) {
		if (x <= arr[i]) continue;
		else {
			if (check[x - arr[i]] == 1)
				ans++;
			else
				check[arr[i]]++;
		}
	}

	cout << ans;

	return 0;

}