#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int five = 0, three = 0;
	five = N / 5;
	three = N % 5 / 3;
	if (N % 5 % 3 != 0)
		cout << "-1";
	else
		cout << five + three;

	return 0;

	//아직 미완성
}