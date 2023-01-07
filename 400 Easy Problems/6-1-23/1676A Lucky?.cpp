#include <iostream>

using namespace std;

int main(){
	int test_case, num;
	cin >> test_case;
	for (; test_case > 0; test_case--){
		cin >> num;
		int a {num % 1000}, b {num / 1000}, result_a {}, result_b {};
		for (int i = 0; i < 3; i++){
			result_a += (a % 10);
			result_b += (b % 10);
			a /= 10;
			b /= 10;
		}
		if (result_a == result_b){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
