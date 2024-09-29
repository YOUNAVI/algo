// ���� �ð�: 1:40

#include <iostream>

using namespace std;

int main(){

	int n = 0;
	cin >> n;

	int n_square = n * n;

	int** snail = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) {
		snail[i] = (int*)malloc(sizeof(int) * n);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			
		}
	}
	

	return 0;
}