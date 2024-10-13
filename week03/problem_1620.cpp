// 1620

#include <iostream>
#include <map>
#include <string>

using namespace std;

map<int, string> db;
map<string, int> db2;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, k;
	string value;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> value;
		
		db.insert({i + 1, value});
		db2.insert({value, i + 1});
	}

	cin.ignore();

	for (int i = 0; i < m; i++) {
		cin >> value;

		if (isdigit(value[0]) != false) {
			k = stoi(value);
			cout << db.find(k)->second << "\n";
		}
		else {
			cout << db2.find(value)->second << "\n";
		}
	}

	return 0;
}