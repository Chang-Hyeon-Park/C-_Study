#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C;
	cin >> A >> B >> C;
	int res = A * B * C;
	int arr[10] = {0};
	while (res != 0) {
		arr[res % 10] += 1;
		res /= 10;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}