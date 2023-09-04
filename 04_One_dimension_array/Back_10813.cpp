#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	int st = 0, la = 0, temp = 0;
	int bucket[101];
	for (int i = 1; i < 101; i++) {
		bucket[i] = i;
	}
	for (int i = 0; i < M; i++) {
		cin >> st >> la;
		temp = bucket[st];
		bucket[st] = bucket[la];
		bucket[la] = temp;
	}
	for (int i = 1; i <= N; i++) {
		cout << bucket[i] << " ";
	}
	return 0;
}