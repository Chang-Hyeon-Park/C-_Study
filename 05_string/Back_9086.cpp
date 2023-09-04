#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		int len = 0;
		len = s.length();
		cout << s[0] << s[len - 1] << "\n";
	}

	return 0;
}