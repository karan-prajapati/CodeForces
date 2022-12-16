#include <climits>
#include <iostream>

using namespace std;

int main(){
	int x, min_value {INT_MAX}, max_value {INT_MIN}, result {-2};
	cin >> x;
	int arr[x];
	for (int i = 0; i < x; i++){
		cin >> arr[i];
		if (arr[i] > max_value){
			max_value = arr[i];
			result++;
		}
		if (arr[i] < min_value) {
			min_value = arr[i];
			result++;
		}
	}
	cout << result << endl;
	return 0;
}
