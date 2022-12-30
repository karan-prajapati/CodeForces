#include <iostream>

using namespace std;

int main(){
	int test_case, a, b;
	cin >> test_case;
	for (; test_case > 0; test_case--){
		cin >> a >> b;
		int min_value {b}, max_value {a};
		if (a <= b){
			min_value = a;
			max_value = b;
		}
		
		if (min_value * 2 > max_value) {
			cout << (min_value * 2) * (min_value * 2) << endl;
		} else {
			cout << max_value * max_value << endl;
		}
	}
	return 0;
}
