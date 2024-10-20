// 11478

#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {

	string S;
	string tmp;
	set<string> A;

	cin >> S;

	for (int i = 0; i < S.size(); i++) {
		for (int j = 0; i + j <= S.size(); j++) {
			tmp = S.substr(j, i);
			A.insert(tmp);
		}
	}

	cout << A.size();

	return 0;
}