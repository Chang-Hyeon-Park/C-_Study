#include <iostream>
#include <algorithm>

using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int index;
	string s;
	cin >> s >> index;
	cout << s[index - 1];

	return 0;
}