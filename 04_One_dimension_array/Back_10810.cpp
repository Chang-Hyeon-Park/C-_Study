#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	int bucket[100] = { 0 };
	int st = 0, la = 0, num = 0;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> st >> la >> num;
		for (int j = st-1; j < la; j++) {
			bucket[j] = num;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << bucket[i] << " ";
	}
	return 0;
}