//#include <iostream>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	int A, B;
//	cin >> A >> B;
//	if (A > B) {
//		cout << ">";
//	}
//	else if (A < B) {
//		cout << "<";
//	}
//	else if (A == B) {
//		cout << "==";
//	}
//	return 0;
//}

#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
	int A, B;
	cin >> A >> B;
	cout << ((A > B) ? ">" : ((A < B) ? "<" : "=="));
	return 0;
}
// 삼항 연산자 풀이