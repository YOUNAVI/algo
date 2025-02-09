#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Answer Code

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	while (N--) {
		int a[26] = {};
		string s1, s2;
		cin >> s1 >> s2;

		for (auto c : s1) a[c - 'a']++;
		for (auto c : s2) a[c - 'a']--; // make one array and increase/decrease so that it can be 0

		bool isPossible = true;
		for (int i : a)
			if (i != 0) isPossible = false; // check all values are 0 or Impossible

		if (isPossible) cout << "Possible\n";
		else cout << "Impossible\n";
	}
}

/*
My Code
int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	int origin[26];
	int check[26];
	int count = 0;
	char tmp1[1001];
	char tmp2[1001];
	fill(origin, origin + 26, 0);
	fill(check, check + 26, 0);
	fill(tmp1, tmp1 + 1001, 0);
	fill(tmp2, tmp2 + 1001, 0);

	cin >> N;

	for (int i = 0; i < N; i++) {

		cin >> tmp1;

		for (int j = 0; j < strlen(tmp1); j++) {
			origin[tmp1[j] - 97]++;
		}

		cin >> tmp2;

		for (int j = 0; j < strlen(tmp2); j++) {
			check[tmp2[j] - 97]++;
		}

		for (int j = 0; j < 26; j++) {
			if (origin[j] == check[j]) {
				count++;
			}
		}

		if (count == 26)
			cout << "Possible\n";
		else
			cout << "Impossible\n";

		count = 0;
		fill(origin, origin + 26, 0);
		fill(check, check + 26, 0);
		fill(tmp1, tmp1 + 1001, 0);
		fill(tmp2, tmp2 + 1001, 0);
	}

	return 0;

}
*/