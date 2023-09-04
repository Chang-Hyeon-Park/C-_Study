//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M;
//	int bucket[100];
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		bucket[i] = i;
//	}
//	int a, b;
//	for (int i = 0; i < M; i++) {
//		cin >> a >> b;
//		for (int i = 0; i <= (b - a) / 2; i++) {
//			swap(bucket[a + i], bucket[b - i]);
//		}
//	}
//	for (int i = 1; i <= N; i++) {
//		cout << bucket[i] << " ";
//	}
//	return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	int bucket[100];
	int a, b;
	for (int i = 1; i <= N; i++) {
		bucket[i] = i;
	}

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		int left = a;
		int right = b;
		while (left < right) {
			int temp = bucket[left];
			bucket[left] = bucket[right];
			bucket[right] = temp;

			left++;
			right--;
		}
	}

	for (int i = 1; i <= N; i++) {
		cout << bucket[i] << " ";
	}

	return 0;
}


