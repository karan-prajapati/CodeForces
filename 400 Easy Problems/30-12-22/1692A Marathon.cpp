#include <iostream>

using namespace std;

int main(){
	int test_case;
	cin >> test_case;
	for (; test_case > 0; test_case--){
		int num, result {}, x;
		for (int i = 0; i < 4; i++){
			cin >> num;
			if (i == 0){
				x = num;
			} else {
				if (num > x){
					result++;
				}
			}
		}
		cout << result << endl;
	}
	return 0;
}
