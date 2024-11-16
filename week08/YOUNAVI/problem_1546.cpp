// 1546

#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, max = 0;
	int score[1000];
	float answer = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		
		cin >> score[i];

		if (max < score[i])
			max = score[i];

		answer += score[i];

	}

	answer = answer * 100 / max / n;
	cout << answer;

	return 0;

}
