// 11003

#include <iostream>
#include <deque>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, L, k;
	typedef pair<long, long> Node; // Node with 2 long types (Value, Index)
	deque<Node> mydeque;

	cin >> N >> L;

	for (int i = 0; i < N; i++) {
		cin >> k; // now key

		while (mydeque.size() && mydeque.back().first > k) { // delete all the Nodes of which its value is lower than now key
			mydeque.pop_back();
		}

		mydeque.push_back(Node(k, i)); // add now key with its index and the deque is sorted automatically

		if (mydeque.front().second <= i - L) { // if the remain deque size is bigger than L (sliding window)
			mydeque.pop_front();	// delete the first node
		}

		cout << mydeque.front().first << " "; // print the first node
	}

	return 0;

}