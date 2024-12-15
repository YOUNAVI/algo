// 6198

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, h;
	long long answer = 0;
	cin >> N;
	vector<int> building(N, 0);
	stack<int> myStack;

	for (int i = 0; i < N; i++) {
		
		cin >> h;

		if (myStack.empty()) {
			myStack.push(h);
			continue;
		}

		while (!myStack.empty() && myStack.top() <= h) {
			myStack.pop();
		}
		answer += myStack.size();
		myStack.push(h);

	}

	cout << answer;

	return 0;
}