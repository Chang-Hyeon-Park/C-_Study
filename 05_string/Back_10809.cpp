#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	for (int i = 0; i < alphabet.length(); i++) {
		cout << (int)s.find(alphabet[i]) << " ";
	}
	return 0;
}

// find : �Է� ���ڿ��� ���ʷ� �����ϴ� ��ġ�� �ε����� ��ȯ�ϴ� �Լ�
// ���� ���� ���ڿ��� ã���� �� ��쿡�� string::npos�� ��ȯ��
// npos�� ���� -1�� ���ǵǾ�������, string::npos��
// �ڷ����� unsigned�̹Ƿ� 2�� ���� ���信 ���� 
// ǥ���� �� �ִ� �ִ� ũ���� ����� ��µȴ�.
// �̸� �����ϱ� ���ؼ��� unsigned�� �ƴ�
// �Ϲ� int������ ĳ������ �����Ͽ� ����ϸ� �ȴ�.

// cout << (int)a.find('d') << "\n";