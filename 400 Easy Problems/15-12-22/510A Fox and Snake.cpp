#include <iostream>
#include <string>

using namespace std;
int main(){
	int x, y;
	string result_string, s1 {"#"}, s2 {"#"};
	cin >> x >> y;
	for (int i = 1; i < y; i++){
		s1 += ".";
		s2 = "." + s2;
	}
	for (int i = 0; i < x; i++){
		for (int j = 0; j < y; j++){
			if (i % 2 == 0){
				result_string += "#";
			}
		}
		if (i % 2 != 0){
			result_string += s2;
			string temp = s2;
			s2 = s1;
			s1 = temp;
		}

		result_string += "\n";
	}
	cout << result_string << endl;
	return 0;
}
