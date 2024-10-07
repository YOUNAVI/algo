// 7785

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	set<string> N;
	string value;
	int count = 0;

	cin >> n;

	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, value);
		if (value.find("enter") != string::npos) {
			//cout << "insert";
			N.insert(value.substr(0, value.find(' ')));
		}
		else {
			//cout << "erase";
			N.erase(value.substr(0, value.find(' ')));
		}
	}

	for (set<string>::reverse_iterator iter = N.rbegin(); iter != N.rend(); iter++) {
		cout << *iter << "\n";
	}

	return 0;
}