// 10250

#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T, H, W, N;
	string first;
	string end;
	int result;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;

		if (N % H == 0) {
			first = to_string(H);
			end = to_string(N / H);
		}
		else {
			first = to_string(N % H);
			end = to_string((N / H) + 1);
		}


		if (stoi(end) < 10) {
			cout << first << "0" << end << "\n";
		}
		else {
			cout << first << end << "\n";
		}
	}

	return 0;
}
