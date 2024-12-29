#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, k;

	cin >> N;

	vector<int> A(N, 0);
	vector<int> answer(N + 1, 0);
	stack<int> myStack;

	for (int i = 0; i < N; i++)
		cin >> A[i];

	for (int i = 0; i < N; i++) {

		while (!myStack.empty() && A[i] > A[myStack.top()]) { // if the stack is not empty and its top element value is lower than A[i]
			answer[myStack.top()] = A[i]; // add A[i] to the answer array
			myStack.pop(); // pop the all elements which has NGE
		}

		myStack.push(i); // push the new index

	}

	while (!myStack.empty()) {
		answer[myStack.top()] = -1; // set all the elements which don't have any NGE as -1
		myStack.pop(); // pop all the elements
	}

	for (int i = 0; i < N; i++) {
		cout << answer[i] << " ";
	}

	return 0;

}