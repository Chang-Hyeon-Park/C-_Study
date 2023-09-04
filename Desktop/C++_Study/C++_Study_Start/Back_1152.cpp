#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int cnt = 0;
	if (s[0] == ' ')
		cnt--;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == ' ')
			cnt++;
	}
	cout << cnt + 1;

	return 0;
}