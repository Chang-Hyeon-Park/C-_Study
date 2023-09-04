#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	int N, v;
	int A[101];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	cin >> v;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] == v)
			sum += 1;
	}
	cout << sum;

	return 0;
}