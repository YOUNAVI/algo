// 1269

#include <iostream>
#include <set>

using namespace std;

int main() {

	int n, m, k;

	cin >> n >> m;

	set<int> A;
	set<int> B;
	set<int> ABunion;
	set<int> ABinter;
	
	for (int i = 0; i < n; i++) {
		cin >> k;
		A.insert(k);
		ABunion.insert(k);
	}

	for (int i = 0; i < m; i++) {
		cin >> k;
		B.insert(k);
		ABunion.insert(k);
	}

	for (set<int>::iterator iter = B.begin(); iter != B.end(); iter++) {
		if (A.find(*iter) != A.end()) {
			ABinter.insert(*iter);
		}
	}

	for (set<int>::iterator iter = ABinter.begin(); iter != ABinter.end(); iter++) {
		ABunion.erase(*iter);
	}

	cout << ABunion.size();

	return 0;
}