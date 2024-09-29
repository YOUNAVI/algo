/* Elapsed 25:03 */
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	char g[10][10];		// 지뢰찾기 판
	char o[10][10];		// 열린 판
	char r[10][10];		// 결과 출력 판

	/* 결과 판 '0'으로 초기화 */
	for (int i{ 0 }; i < n; ++i)
		for (int j{ 0 }; j < n; ++j)
			r[i][j] = '0';

	/* 지뢰찾기 판 입력
	*  지뢰찾기 판을 입력하면서, 입력한 값이 '*'이면 결과판의 주위 8칸 값을 +1 해줌 */
	for (int i{ 0 }; i < n; ++i)
		for (int j{ 0 }; j < n; ++j) {
			cin >> g[i][j];
			if (g[i][j] == '*') {
				r[i][j] = '*';

				// 주위 8칸 +1
				for (int x{ -1 }; x <= 1; ++x)
					for (int y{ -1 }; y <= 1; ++y) {
						if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < n && !(x == 0 && y == 0)) // 유효한 배열 범위 검사
							r[x + i][y + j] += 1;
					}
			}
		}

	/* 열린 판 입력 */
	for (int i{ 0 }; i < n; ++i)
		for (int j{ 0 }; j < n; ++j)
			cin >> o[i][j];

	bool found = false;		// 열린 칸이 지뢰를 포함하는지 여부
	for (int i{ 0 }; i < n; ++i)
		for (int j{ 0 }; j < n; ++j) {
			if (o[i][j] == '.') 
				r[i][j] = '.';
			if (o[i][j] == 'x' && g[i][j] == '*')	// 열린 칸이면서 지뢰이면
				found = true;
		}

	// 열린 칸에 지뢰가 있을 경우 결과판에서 모든 지뢰 오픈
	if (found) {
		for (int i{ 0 }; i < n; ++i)
			for (int j{ 0 }; j < n; ++j) {
				if (g[i][j] == '*')
					r[i][j] = '*';
			}
	}


	for (int i{ 0 }; i < n; ++i) {
		for (int j{ 0 }; j < n; ++j)
			cout << r[i][j];
		cout << endl;
	}
}
