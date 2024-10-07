// 14425

#include <iostream>
#include <set>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	set<string> N;
	string value;
	int count = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> value;
		N.insert(value);
	}

	string* M = new string[m];

	for (int i = 0; i < m; i++) {
		cin >> value;
		M[i] = value;
	}

	for (int i = 0; i < m; i++) {
		if (N.find(M[i]) != N.end()) {
			count++;
		}
	}

	cout << count;

	return 0;
}