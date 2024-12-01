// 1940

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, M, answer = 0;
	cin >> N >> M;
	vector<long> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (A[i] + A[j] == M)
				answer++;
		}
	}

	cout << answer;

	return 0;

}

// best

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, M, answer = 0;
	cin >> N >> M;
	vector<long> A(N, 0);
	long start = 0;
	long end = N - 1;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());

	while (start < end) {
		if (A[start] + A[end] == M) {
			answer++;
			start++;
		}
		else if (A[start] + A[end] < M) {
			start++;
		}
		else if (A[start] + A[end] > M) {
			end--;
		}
	}

	cout << answer;

	return 0;

}