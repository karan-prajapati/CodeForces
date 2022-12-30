#include <iostream>
#include <string>

using namespace std;

int main(){
	int test_case_arr [4], arr [4] {}, result {};
	for (int i = 0; i < 4; i++){
		cin >> test_case_arr[i];
	}
	string s, str {"1234"};
	cin >> s;
	string s1 = s;
	for (int i = 0; i < 4; i++){
		if (s.size() > 0){
			for (auto j : s1){
				if (j == str.at(i)){
					arr[i]++;
					s.erase(s.begin() + s.find(j));
				} 
			}
			s1 = s;
		} else {
			break;
		} 
	}
	for (int i = 0; i < 4; i++){
		result += test_case_arr[i] * arr[i];
	}
	cout << result << endl;
	return 0;
}
