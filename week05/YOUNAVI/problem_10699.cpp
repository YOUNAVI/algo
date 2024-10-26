// 10699

#include <iostream>
#include <ctime>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	time_t timer = time(NULL);
	struct tm* t = localtime(&timer);

	cout << t->tm_year + 1900 << "-" << t->tm_mon + 1 << "-" << t->tm_mday;

	return 0;
}