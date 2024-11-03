// 4153

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int leng[3];

	while (true) {
		cin >> leng[0] >> leng[1] >> leng[2];

		if (leng[0] == 0)
			break;

		sort(leng, leng + 3);

		if ((leng[0] * leng[0]) + (leng[1] * leng[1]) == (leng[2] * leng[2]))
			cout << "right\n";
		else
			cout << "wrong\n";


	}

	return 0;
}
