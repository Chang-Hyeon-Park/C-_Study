#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b;
	cin >> a >> b;
	string bigger;
	for (int i = 2; i >= 0; i--) {
		if (a[i] > b[i]) {
			bigger = a;
			break;
		}
		else if (a[i] < b[i]) {
			bigger = b;
			break;
		}
	}
	for (int i = 2; i >= 0; i--) {
		cout << bigger[i];
	}
	return 0;
}