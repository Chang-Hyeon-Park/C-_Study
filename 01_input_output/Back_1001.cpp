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


// int argc : main()함수에 전달되는 데이터의 갯수
// char* argv[] : main()함수에 전달되는 실제적인 데이터로 
// char형 포인터 배열로 구성되어 있다.

//#include <stdio.h>
//
//int main(int argc, char const* argv[]) {
//	for (int i = 0; i < argc; i++) {
//		printf("argv[%d]은 %s입니다.\n", i, argv[i]);
//	}
//	printf("argc는 %d개 입니다.\n", argc);
//	return 0;
//}