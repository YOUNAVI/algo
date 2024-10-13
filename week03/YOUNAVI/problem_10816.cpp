#include <iostream>
#include <map>

using namespace std;

map <int, int> card;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, k;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> k;
		card[k]++;
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> k;
		cout << card[k] << " ";
	}

	return 0;
}