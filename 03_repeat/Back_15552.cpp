#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false); // C++�� C ǥ�� ��Ʈ���� ����ȭ ����
	cin.tie(NULL); // �Ǵ� cin.tie(nullptr), cin.tie(0)���� ��ü ����
	int N, A, B;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		cout << A + B << "\n";
	}
	return 0;
}