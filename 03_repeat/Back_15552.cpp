#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false); // C++와 C 표준 스트림의 동기화 해제
	cin.tie(NULL); // 또는 cin.tie(nullptr), cin.tie(0)으로 대체 가능
	int N, A, B;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}
	return 0;
}