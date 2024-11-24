// 10986

#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long N, M, temp, answer = 0;
	
	cin >> N >> M;

	vector<long> S(N + 1, 0);
	vector<long> C(M, 0);

	for (long i = 1; i <= N; i++) {
		cin >> temp;
		S[i] = S[i - 1] + temp;
	}

	for (long i = 1; i <= N; i++) {
		S[i] %= M;
		C[S[i]]++;
	}

	answer += C[0];

	for (long i = 0; i < M; i++) {
		if (C[i] > 1) {
			answer += (C[i] * (C[i] - 1)) / 2;
		}
	}

	cout << answer;

	return 0;

}