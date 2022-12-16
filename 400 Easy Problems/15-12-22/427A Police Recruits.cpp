#include <iostream>

using namespace std;

int main(){
	int x, off_present {}, test_case, result {};
	cin >> test_case;
	for (; test_case > 0; test_case--){
		cin >> x;
		if (x < 0){
			if (off_present < 1){
				result++;
			} else {
				off_present--;
			}
		} else {
			off_present += x;
		}
	}
	cout << result << endl;
	return 0;
}
