#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int A = 0, B = 0;
	while (1) {
		cin >> A >> B;
		if (A == 0 && B == 0)
			break;
		cout << A + B << "\n";
	}
	return 0;
}