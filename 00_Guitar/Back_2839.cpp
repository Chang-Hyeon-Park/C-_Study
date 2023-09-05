//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//	int five = 0, three = 0;
//	five = N / 5;
//	three = N % 5 / 3;
//	if (N % 5 % 3 != 0)
//		cout << "-1";
//	else
//		cout << five + three;
//
//	return 0;
//
//	//아직 미완성
//}

#include <iostream>
using namespace std;
int dp[5001]; //global 변수이기 때문에 0으로 초기화된 배열

int main(int argc, char const* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	dp[3] = dp[5] = 1;
	for (int i = 6; i <= N; i++) {
		if (dp[i - 3])
			dp[i] = dp[i - 3] + 1;
		if (dp[i - 5])
			dp[i] = dp[i] ? min(dp[i], dp[i - 5] + 1) : dp[i - 5] + 1;
	}
	cout << (dp[N] == 0 ? -1 : dp[N]) << "\n";
	return 0;
}