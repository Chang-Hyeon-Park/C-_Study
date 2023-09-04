#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int num = 0, ten = 0, one = 0, cnt = 0;
	int new_num = N;
	while (1) {
		ten = new_num / 10;
		one = new_num % 10;
		num = ten + one;
		new_num = one * 10 + num % 10;
		cnt++;
		if (new_num == N)
			break;
	}
	cout << cnt;

	return 0;
}