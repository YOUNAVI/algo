// 2577

#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C, mul;
	string mul_result;
	int count_0 = 0, count_1 = 0, count_2 = 0, count_3 = 0, count_4 = 0;
	int count_5 = 0, count_6 = 0, count_7 = 0, count_8 = 0, count_9 = 0;

	cin >> A >> B >> C;

	mul = A * B * C;
	mul_result = to_string(A * B * C);

	for (int i = 0; i < mul_result.length(); i++) {
		switch (mul_result[i]) {
		case '0':
			count_0++;
			break;
		case '1':
			count_1++;
			break;
		case '2':
			count_2++;
			break;
		case '3':
			count_3++;
			break;
		case '4':
			count_4++;
			break;
		case '5':
			count_5++;
			break;
		case '6':
			count_6++;
			break;
		case '7':
			count_7++;
			break;
		case '8':
			count_8++;
			break;
		case '9':
			count_9++;
			break;
		}
	}

	cout << count_0 << "\n";
	cout << count_1 << "\n";
	cout << count_2 << "\n";
	cout << count_3 << "\n";
	cout << count_4 << "\n";
	cout << count_5 << "\n";
	cout << count_6 << "\n";
	cout << count_7 << "\n";
	cout << count_8 << "\n";
	cout << count_9;

	return 0;
}
