//#include <iostream>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int num[31];
//	int send;
//	int a[2];
//	int plus = 0;
//	for (int i = 1; i <= 30; i++) {
//		num[i] = i;
//	}
//	for (int i = 0; i < 28; i++) {
//		cin >> send;
//		num[send] = 0;
//	}
//	for (int i = 1; i <= 30; i++) {
//		if (num[i] != 0) {
//			a[plus] = num[i];
//			plus++;
//		}
//	}
//
//	int max = 0, min = 0;
//	if (a[0] < a[1]) {
//		max = a[1];
//		min = a[0];
//	}
//	else {
//		max = a[0];
//		min = a[1];
//	}
//	cout << min << "\n" << max;
//
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int num[31];
//	int send;
//	int a[2];
//	int plus = 0;
//	for (int i = 1; i <= 30; i++) {
//		num[i] = i;
//	}
//	for (int i = 0; i < 28; i++) {
//		cin >> send;
//		num[send] = 0;
//	}
//	for (int i = 1; i <= 30; i++) {
//		if (num[i] != 0) {
//			cout << num[i] << "\n";
//		}
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[31] = { 0 };
	int a;
	for (int i = 0; i < 28; i++) {
		cin >> a;
		arr[a] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if (!arr[i])
			cout << i << "\n";
	}
	return 0;
}

// 어짜피 배열로 저장한다면 앞에서부터 출력하기 때문에 
// 굳이 작은값을 고를 필요가 없다.