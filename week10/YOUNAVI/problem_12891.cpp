// 12891

#include <iostream>

using namespace std;

int S, P, checkAnswer, answer = 0;
string str;
int myArr[4] = { 0 };
int checkArr[4] = { 0 };

void Add(char c);
void Remove(char c);
void check();

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> S >> P;
	cin >> str;

	for (int i = 0; i < 4; i++) {
		cin >> checkArr[i];
		if (checkArr[i] == 0)
			checkAnswer++;
	}

	for (int i = 0; i < P; i++)
		Add(str[i]);

	check();

	for (int i = P; i < S; i++){
		int j = i - P;
		Add(str[i]);
		Remove(str[j]);
		check();
	}

	cout << answer;

	return 0;

}

void Add(char c) {
	switch (c) {
	case 'A':
		myArr[0]++;
		if (myArr[0] == checkArr[0])
			checkAnswer++;
		break;

	case 'C':
		myArr[1]++;
		if (myArr[1] == checkArr[1])
			checkAnswer++;
		break;

	case 'G':
		myArr[2]++;
		if (myArr[2] == checkArr[2])
			checkAnswer++;
		break;

	case 'T':
		myArr[3]++;
		if (myArr[3] == checkArr[3])
			checkAnswer++;
		break;
	}
}

void Remove(char c) {
	switch (c) {
	case 'A':
		if (myArr[0] == checkArr[0])
			checkAnswer--;
		myArr[0]--;
		break;

	case 'C':
		if (myArr[1] == checkArr[1])
			checkAnswer--;
		myArr[1]--;
		break;

	case 'G':
		if (myArr[2] == checkArr[2])
			checkAnswer--;
		myArr[2]--;
		break;

	case 'T':
		if (myArr[3] == checkArr[3])
			checkAnswer--;
		myArr[3]--;
		break;
	}
}

void check(){
	if (checkAnswer == 4)
		answer++;
}