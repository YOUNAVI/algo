// 10815

#include <iostream>
#include <set>

using namespace std;



int main() {

	int n;
	set<int> N;
	int value;
	int m;
	int* M = new int[m];

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> value;
		N.insert(value);
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> value;
		M[i] = value;
	}


	for (int i = 0; i < m; i++) {
		if (N.find(M[i]) != N.end()) {
			M[i] = 1;
		}
		else if (N.find(M[i]) == N.end()) {
			M[i] = 0;
		}
	}

	for (int i = 0; i < m; i++) {
		cout << M[i];

		if (i != m) {
			cout << " ";
		}
	}

	return 0;
}