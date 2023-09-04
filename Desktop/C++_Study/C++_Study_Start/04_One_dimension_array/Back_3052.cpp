//#include <iostream>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int arr[11] = { 0 };
//	int arr2[11] = { 0 };
//	int num;
//	int res = 0;
//	for (int i = 0; i < 10; i++) {
//		cin >> num;
//		arr[i] = num;
//	}
//	for (int i = 0; i < 10; i++) {
//		arr2[i] = arr[i] % 42;
//	}
//	for (int i = 0; i < 10; i++) {
//		for (int j = i + 1; j < 10; j++) {
//			if (arr2[i] == arr2[j])
//				arr2[i] = 0;
//		}
//	}
//	for (int i = 0; i < 10; i++) {
//		if (arr2[i] != 0)
//			res++;
//	}
//	res++;
//	if (res == 11)
//		res--;
//
//	cout << res;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int arr[10];
//	bool seenRemainders[42] = { false };
//
//	for (int i = 0; i < 10; i++) {
//		cin >> arr[i];
//		seenRemainders[arr[i] % 42] = true;
//	}
//	int res = 0;
//	for (bool seen : seenRemainders) {
//		if (seen)
//			res++;
//	}
//	cout << res;
//	return 0;
//}


#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int count[42] = {};
	int v;
	for (int i = 0; i < 10; i++) {
		cin >> v;
		count[v % 42]++;
	}
	int result = 0;

	for (int i = 0; i < 42; i++) {
		if (count[i] > 0)
			result++;
	}

	//for (int v : count) {
	//	if (v > 0) {
	//		result++;
	//	}
	//}
	cout << result;

	return 0;
}