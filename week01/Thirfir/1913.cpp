/* Elapsed Time 24:55 */
#include <iostream>
using namespace std;

int N, n, r[1000][1000];
/* 기본 구현 로직은 바깥부터 시작해서 가운데까지 도달하는 것 
즉 가장 큰 수(N^2)에서 가장 작은수(1)로 도달*/
int main() {
	cin >> N >> n;

	int i{ 0 }, j{ 0 }, prev = N * N, x, y, drt{ 0 };  // 0아래 1오른 2위 3왼
	while (prev != 0) {
		r[i][j] = prev--;
		if (r[i][j] == n) {
			x = i, y = j;	// 입력한 자연수의 좌표(0부터 시작했으므로 출력할 때 +1 해줌)
		}

		if (drt == 0) {		// 아래 방향
			if (i + 1 >= N || r[i + 1][j] != 0) {	// 벽에 부딪혔을 때 방향 전환
				drt = 1;
				++j;	// 방향 전환하면서 전환한 쪽으로 +1 해줘야함
			}
			else ++i;
		}
		else if (drt == 1) {	// 오른쪽 방향
			if (j + 1 >= N || r[i][j + 1] != 0) {
				drt = 2;
				--i;
			}
			else ++j;
		}
		else if (drt == 2) {	// 위쪽 방향
			if (i - 1 < 0 || r[i - 1][j] != 0) {
				drt = 3;
				--j;
			}
			else --i;
		}
		else {	// 왼쪽 방향
			if (j - 1 < 0 || r[i][j - 1] != 0) {
				drt = 0;
				++i;
			}
			else --j;
		}
	}
	
	// 결과 출력
	for (int i{ 0 }; i < N; ++i) {
		for (int j{ 0 }; j < N; ++j)
			cout << r[i][j] << ' ';
		cout << '\n';
	}
	cout << x + 1 << ' ' << y + 1;
}
