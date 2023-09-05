#include <iostream>
#include <string>
using namespace std;
int main(int argc, char argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	getline(cin, str);
	int count = 0;
	if (str.empty()) {
		cout << "0";
		return 0;
	}
	count = 1;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
			count++;
	}
	if (str[0] == ' ')
		count--;
	if (str[str.length() - 1] == ' ')
		count--;
	cout << count;

	return 0;
}


//cin >> str : 공백 문자가 나타날때까지만 저장
//즉, 공백을 포함한 문장을 저장할 수는 없다
//getlin(cin,str) : 공백 문자를 포함해서 문장을
//저장할 수 있다.


//#include <iostream>
//#include <string>
//using namespace std;
//int main(int argc, char const* argv[]) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	string str;
//	getline(cin, str);
//	int cnt = 1;
//	for (int i = 0; i < str.length(); i++) {
//		if (str[i] == ' ')
//			cnt++;
//	}
//	if (str[0] == ' ')
//		cnt--;
//	if (str[str.length() - 1] == ' ')
//		cnt--;
//	cout << cnt;
//	return 0;
//}