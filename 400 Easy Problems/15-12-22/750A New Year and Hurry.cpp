#include <iostream>

using namespace std;

int main(){
	int n, k, result;
	cin >> n >> k;
	result = n;
	for (int i = 1; i <= n; i++){
		k += i * 5;
		if (k > 240){
			result = i - 1;
			break;
		}
	}
	cout << result << endl;
	return 0;
}
