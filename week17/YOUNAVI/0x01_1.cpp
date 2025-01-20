#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int func1(int N);

int main() {

	int n;
	cin >> n;
	cout << func1(n);

	return 0;
}

int func1(int N) {
	
	int answer = 0;

	for (int i = 1; i <= N; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			answer += i;
		}
	}

	return answer;
}

// O(N)