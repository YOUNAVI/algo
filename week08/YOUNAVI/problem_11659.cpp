// 11659

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, i, j;
	int A[100001] = { 0 };
	int S[100001] = { 0 };

	cin >> N >> M;

	for (int n = 1; n <= N; n++) {
		
		cin >> A[n];
		S[n] = S[n - 1] + A[n];

	}
		
	for (int n = 0; n < M; n++) {
		
		cin >> i >> j;
		cout << S[j] - S[i - 1] << "\n";

	}

	return 0;

}

//int main() {
//
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int N, M, i, j, tmp;
//	int S[100001] = { 0 };
//
//	cin >> N >> M;
//
//	for (int n = 1; n <= N; n++) {
//
//		cin >> tmp;
//		S[n] = S[n - 1] + tmp;
//
//	}
//
//	for (int n = 0; n < M; n++) {
//
//		cin >> i >> j;
//		cout << S[j] - S[i - 1] << "\n";
//
//	}
//
//	return 0;
//
//}