#include <iostream>

using namespace std;

int main(){
	int test_case {}, a, b;
	cin >> test_case;
	for (; test_case > 0; test_case--){
		cin >> a >> b;
		if (a % b == 0){
			cout << 0 << endl;
		} else {
			cout << b - (a % b) << endl;
		}
	}
	return 0;
}
