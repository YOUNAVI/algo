// 1874

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k = 1;
	bool flag = true;
	cin >> n;

	vector<int> A(n, 0);
	vector<char> result;
	stack<int> mystack;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < A.size(); i++) {
		if (A[i] >= k) {
			while (A[i] >= k) {
				mystack.push(k++);
				result.push_back('+');
			}
			mystack.pop();
			result.push_back('-');
		}

		else {
			int a = mystack.top();
			mystack.pop();
			if (a > A[i]) {
				cout << "NO";
				flag = false;
				break;
			}
			else {
				result.push_back('-');
			}
		}

	}

	if (flag) {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << "\n";
		}
	}

	return 0;

}