#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	int input[10], max = 0, num = 0;
	for (int i = 0; i < 9; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < 9; i++) {
		if (input[i] > max) {
			max = input[i];
			num = i + 1;
		}
	}
	cout << max << "\n" << num;
	return 0;
}