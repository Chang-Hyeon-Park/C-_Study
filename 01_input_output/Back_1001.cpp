//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(int argc, char const *argv[]) {
//	int A, B;
//	scanf("%d %d", &A, &B);
//	printf("%d", A - B);
//	return 0;
//}

#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
	int A, B;
	cin >> A >> B;
	cout << A - B;
	return 0;
}


// int argc : main()�Լ��� ���޵Ǵ� �������� ����
// char* argv[] : main()�Լ��� ���޵Ǵ� �������� �����ͷ� 
// char�� ������ �迭�� �����Ǿ� �ִ�.

//#include <stdio.h>
//
//int main(int argc, char const* argv[]) {
//	for (int i = 0; i < argc; i++) {
//		printf("argv[%d]�� %s�Դϴ�.\n", i, argv[i]);
//	}
//	printf("argc�� %d�� �Դϴ�.\n", argc);
//	return 0;
//}