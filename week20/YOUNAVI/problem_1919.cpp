#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int ans = 0;
	string tmp1, tmp2;

	cin >> tmp1 >> tmp2;

	int arr[26];
	fill(arr, arr + 26, 0);

	for (auto c : tmp1) arr[c - 'a']++;
	for (auto c : tmp2) arr[c - 'a']--;

	for (int i = 0; i < 26; i++) {
		ans += abs(arr[i]);
	}

	cout << ans;

	return 0;

}
