#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int M;
	string str, line;
	list<char> stringList;
	cin >> str;
	cin >> M;
	cin.ignore();

	for (auto c : str) {
		stringList.push_back(c);
	}
	
	auto cursor = stringList.end();

	for (int i = 0; i < M; i++) {
		getline(cin, line);
		switch (line[0]) {
		case 'L':
			if (cursor != stringList.begin())
				cursor--;
			break;
		case 'D':
			if (cursor != stringList.end())
				cursor++;
			break;
		case 'B':
			if (cursor != stringList.begin()) {
				cursor--;
				cursor = stringList.erase(cursor);
			}
			break;
		case 'P' :
			stringList.insert(cursor, line[2]);
			break;
		default:
			break;
		}
	}

	for (auto i : stringList) cout << i;

	return 0;

}
