#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	int H, M;
	cin >> H >> M;
	if (H == 0) {
		if (M < 45) {
			H = 23;
			M = 60 - (45 - M);
		}
		else {
			M -= 45;
		}
	}
	else {
		if (M < 45) {
			H -= 1;
			M = 60 - (45 - M);
		}
		else {
			M -= 45;
		}
	}
	cout << H << " " << M;
	return 0;
}