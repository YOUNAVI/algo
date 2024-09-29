/* Elapsed Time 56:02 */
#include <iostream>
using namespace std;
int board[20][20];

// 그냥 중복되어서 빼놓은 함수
void printb(int i, int j) {
	cout << board[i][j] << '\n';
	cout << i << ' ' << j;
}
/* 배열의 크기가 20*20이므로, 브루트포스 식으로 비교 검사해도 시간 문제 X
* 왼쪽아래방향, 수직아래방향, 오른쪽아래방향, 오른쪽수평방향으로 검사 진행
* 왼쪽 위에서 부터 검사하면서 내려오므로 나머지 왼쪽수평방향, 왼쪽위방향, 위수직방향, 오른쪽위방향 검사는 필요 X
* Edge Case에 대한 검사가 핵심...
*/
int main() {
	for (int i{ 1 }; i < 20; ++i)
		for (int j{ 1 }; j < 20; ++j)
			cin >> board[i][j];

	for (int i{ 1 }; i < 20;++i)
		for (int j{ 1 }; j < 20; ++j) {
			if (board[i][j] != 0) {	// 돌이 놓여져 있는 경우 5목 검사 시작
				bool omok = true;
				if (j + 4 < 20) {	// 오른쪽수평방향, 검사 방향의 칸 수가 유효한지 검사 (돌 5개를 놓을 공간이 있는지)
					for (int k{ 1 }; k < 5; ++k)
						if (board[i][j] != board[i][j + k])
							omok = false;
					if (omok) {
						if (j + 5 >= 20 || board[i][j + 5] != board[i][j]) { // 6목 검사(검사 방향 +1칸의 돌과 같은지 검사)
							if (j - 1 <= 0 || board[i][j - 1] != board[i][j]) { // 초기검사위치에서 -1칸의 돌과 같은지 검사
								printb(i, j);	// 6목 아닐 경우만 출력
								return 0;
							}
						}
					}
				}
			
				omok = true;
				if (j - 4 > 0 && i + 4 < 20) { // 왼쪽아래방향, 검사 방향의 칸 수가 유효한지 검사
					for (int k{ 1 }; k < 5; ++k)
						if (board[i][j] != board[i + k][j - k])
							omok = false;
					if (omok) {
						if (j - 5 <= 0 || i + 5 >= 20 || board[i + 5][j - 5] != board[i][j]) {
							if (j + 1 >= 20 || i - 1 <= 0 || board[i][j] != board[i - 1][j + 1]) {
								printb(i + 4, j - 4);
								return 0;
							}
						}
					}
				}
				

				omok = true;
				if (i + 4 < 20) {  // 수직아래방향, 검사 방향의 칸 수가 유효한지 검사
					for (int k{ 1 }; k < 5; ++k)
						if (board[i][j] != board[i + k][j])
							omok = false;
					if (omok) {
						if (i + 5 >= 20 || board[i + 5][j] != board[i][j]) {
							if (i - 1 <= 0 || board[i - 1][j] != board[i][j]) {
								printb(i, j);
								return 0;
							}
						}
					}
				}
				
				omok = true;
				if (i + 4 < 20 && j + 4 < 20) { // 오른쪽아래방향, 검사 방향의 칸 수가 유효한지 검사
					for (int k{ 1 }; k < 5; ++k)
						if (board[i][j] != board[i + k][j + k])
							omok = false;
					if (omok) {
						if (i + 5 >= 20 || j + 5 >= 20 || board[i + 5][j + 5] != board[i][j]) {
							if (i - 1 <= 0 || j - 1 <= 0 || board[i - 1][j - 1] != board[i][j]) {
								printb(i, j);
								return 0;
							}
						}
					}
				}
				
			}
		}
	cout << 0;
}
