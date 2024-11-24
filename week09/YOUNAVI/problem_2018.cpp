// 2018

#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, start_index, end_index, sum, answer;
	start_index = 1;
	end_index = 1;
	sum = 1;
	answer = 0;

	cin >> N;

	while (end_index != N) {
		if (sum < N) {
			end_index++;
			sum += end_index;
		}
		else if (sum > N) {
			sum -= start_index;
			start_index++;
		}
		else if (sum == N) {
			end_index++;
			sum += end_index;
			answer++;
		}
	}

	cout << answer + 1; // N its own

	return 0;

}