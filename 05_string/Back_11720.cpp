#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	string s;
	cin >> N >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	cout << sum;

	return 0;
}