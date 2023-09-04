//#include <iostream>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int N;
//	cin >> N;
//	int max = -1000001, min = 1000001;
//	int input;
//	for (int i = 0; i < N; i++) {
//		cin >> input;
//		if (input > max)
//			max = input;
//		if (input < min)
//			min = input;
//	}
//	cout << min << " " << max;
//	return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int A[1000001];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A, A + N); // 0 ~ N - 1 범위 정렬
	cout << A[0] << " " << A[N - 1];
	return 0;
}