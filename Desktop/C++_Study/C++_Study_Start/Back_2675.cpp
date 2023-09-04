#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T, R;
	string S;
	cin >> T;
	for (int k = 0; k < T; k++) {
		cin >> R >> S;
		int len = S.length();
		for (int i = 0; i < len; i++) {
			for (int j = 0; j < R; j++) {
				cout << S[i];
			}
		}
		cout << "\n";
	}
	return 0;
}