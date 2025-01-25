#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string a;
	int arr[26];
	fill(arr, arr + 26, 0);
	cin >> a;

	for (int i = 0; i < a.size(); i++) {
		arr[a[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;

}