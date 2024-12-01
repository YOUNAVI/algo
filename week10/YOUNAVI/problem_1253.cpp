// 1253

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, answer = 0;
	cin >> N;
	vector<long> A(N, 0);
	long start = 0;
	long end = 0;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	sort(A.begin(), A.end());
	
	for (int i = 0; i < N; i++) {
		start = 0;
		end = N - 1;
		while (start < end) {
			if (A[start] + A[end] == A[i]) {
				if (start != i && end != i) {
					answer++;
					break;
				}
				else if (start == i)
					start++;
				else if (end == i)
					end--;
			}
			else if (A[start] + A[end] < A[i]) {
				start++;
			}
			else if (A[start] + A[end] > A[i]) {
				end--;
			}
		}
	}

	cout << answer;

	return 0;

}
