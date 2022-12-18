#include <iostream>
#include <climits>

using namespace std;

int max_value(int array[], int index){
	int value {INT_MIN};
	for (int i = 0; i < index; i++){
		if (array[i] > value){
			value = array[i];
		}
	}
	return value;
}

int main(){
	int n, x, result, sum {};
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	result = max_value(arr, n);
	for (int i = 0; i < n; i++){
		sum += (result - arr[i]);
	}
	cout << sum << endl;
	return 0;
}
