#include <iostream>
#include <map>

using namespace std;

map<string, int> hear;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	int count = 0;
	string value;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> value;
		hear.insert({ value, 0 });
	}
	
	for (int i = 0; i < m; i++) {
		cin >> value;
		if (hear.find(value) != hear.end()) {
			count++;
			hear[value]++;
		}
	}

	cout << count << "\n";

	for (map<string, int>::iterator iter = hear.begin(); iter != hear.end(); iter++) {
		if (iter->second > 0) {
			cout << iter->first << "\n";;
		}
	}

	return 0;
}