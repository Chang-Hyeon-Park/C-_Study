//#include <iostream>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	int H, M, N;
//	int F;
//	cin >> H >> M;
//	cin >> N;
//	F = M + N;
//
//	int F_H, F_M;
//	int L_H, L_M;
//
//	if (F >= 60) {
//		F_H = F / 60;
//		F_M = F % 60;
//		L_H = H + F_H;
//		L_M = F_M;
//	}
//	else {
//		L_H = H;
//		L_M = F;
//	}
//	
//	if (L_M >= 60) {
//		L_H += 1;
//		L_M -= 60;
//		if (L_H > 23) {
//			L_H -= 24;
//		}
//	}
//	else {
//		if (L_H > 23) {
//			L_H -= 24;
//		}
//	}
//	cout << L_H << " " << L_M;
//	return 0;
//}

#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
	int A, B, C;
	cin >> A >> B >> C;

	int min = 60 * A + B;
	min += C;

	int hour = (min / 60) % 24;
	int minute = min % 60;

	cout << hour << " " << minute;
	return 0;
}