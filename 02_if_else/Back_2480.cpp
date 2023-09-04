#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const* argv[]) {
	int A, B, C;
	cin >> A >> B >> C;
	int max_val = 0;

	if (A != B && B != C && C != A) {
		max_val = max(A, B);
		max_val = max(max_val, C);
		cout << max_val * 100 << "\n";
	}
	else if (A == B && B != C) {
		cout << 1000 + (A * 100) << "\n";
	}
	else if (A == C && A != B) {
		cout << 1000 + (A * 100) << "\n";
	}
	else if (B == C && A != B) {
		cout << 1000 + (B * 100) << "\n";
	}
	else {
		cout << 10000 + (A * 1000) << "\n";
	}

	return 0;
}