#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	int test_case;
	cin >> test_case;
	for (; test_case > 0; test_case--){
		cin >> s;
		for (int i = 0; i < 3; i++){
			s.at(i) = tolower(s.at(i));
		}
		if (s == "yes"){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
