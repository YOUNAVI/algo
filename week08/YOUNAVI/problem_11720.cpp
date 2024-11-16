// 11720

#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, answer = 0;
	string numbers = "";
	
	cin >> n >> numbers;

	for (int i = 0; i < n; i++) {
		answer += numbers[i] - '0';
	}

	cout << answer;

	return 0;
}
