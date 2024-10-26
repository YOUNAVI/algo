// 31403

#include <iostream>
#include <string>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c, result_1, result_2;
	string n, m;

	cin >> a;
	cin >> b;
	cin >> c;

	result_1 = a + b - c;

	n = to_string(a);
	m = to_string(b);
	result_2 = stoi(n + m) - c;
	
	cout << result_1 << "\n" << result_2;

	return 0;
}
