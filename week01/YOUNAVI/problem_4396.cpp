// 시작시간: 21:44 ~ 중단 12:14
// 재개: 12:15 ~ 중단 : 1:34
// 재개: 2:20 ~ 중단 : 2:50
// 소요시간: 약 4시간 15분
#include <iostream>
#include <string>

using namespace std;

int main(){

	int n;
	cin >> n;

	char** pannel = (char**)malloc(sizeof(char*) * (n + 2));
	for (int i = 0; i < n + 2; i++) {
		pannel[i] = (char*)malloc(sizeof(char) * (n + 2));
	}

	char** opened = (char**)malloc(sizeof(char*) * (n + 2));
	for (int i = 0; i < n + 2; i++) {
		opened[i] = (char*)malloc(sizeof(char) * (n + 2));
	}

	cin.ignore();
	string line ="";
	char ch[100];

	for (int i = 1; i < n + 1; i++) {
		getline(cin, line);
		for (int j = 1; j < n + 1; j++) {
			strcpy_s(ch, line.substr(j - 1, 1).c_str());
			pannel[i][j] = ch[0];
		}
	}

	for (int i = 1; i < n + 1; i++) {
		getline(cin, line);
		for (int j = 1; j < n + 1; j++) {
			strcpy_s(ch, line.substr(j - 1, 1).c_str());
			opened[i][j] = ch[0];
		}
	}

	for (int i = 0; i < n + 2; i++) {
		pannel[0][i] = '.';
		pannel[i][0] = '.';
		pannel[n + 1][i] = '.';
		pannel[i][n + 1] = '.';
		opened[0][i] = '.';
		opened[i][0] = '.';
		opened[n + 1][i] = '.';
		opened[i][n + 1] = '.';
	}

	int count = 0;
	bool mine = false;

	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < n + 1; j++) {

			count = 0;

			if (pannel[i][j] == '*'){
				break;
			}

			
			for (int k = i - 1; k <= i + 1; k++) {
				for (int l = j - 1; l <= j + 1; l++)
				{
					if (k == i && l == j) {
						continue;
					}

					if (pannel[k][l] == '*') {
						mine = true;
						count++;
					}

				}
			}
			
			opened[i][j] = count + 48;

			if (mine == true){
				mine = false;
				continue;
			}
		}
		mine = false;
		
	}


	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			cout << pannel[i][j];
		}
		cout << endl;
	}
	for (int i = 1; i < n + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			cout << opened[i][j];
		}
		cout << endl;
	}

	//cout << n << endl;

	return 0;
}