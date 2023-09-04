//#include <iostream>
//#include <algorithm>>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int N;
//	float score[1000];
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> score[i];
//	}
//	int max = 0;
//	for (int i = 0; i < N; i++) {
//		if (max < score[i])
//			max = score[i];
//	}
//
//	for (int i = 0; i < N; i++) {
//		score[i] = (score[i] / max) * 100;
//	}
//	float result = 0;
//	for (int i = 0; i < N; i++) {
//		result += score[i];
//	}
//	cout << result / N;
//
//
//	return 0;
//}

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	double sum = 0;
	cin >> N;
	double arr[1001];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		sum += (arr[i] / arr[N - 1]) * 100;
	}
	cout << sum / N;
	return 0;
}