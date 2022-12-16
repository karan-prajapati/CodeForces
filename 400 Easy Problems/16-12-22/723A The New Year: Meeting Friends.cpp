#include <iostream>

using namespace std;

int *sort_array(int *arr){
	for (int i = 0; i < 2; i++){
		for (int j = i + 1; j < 3; j++){
			if (arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}

int main(){
	int array[3];
	for (int i = 0; i < 3; i++){
		cin >> array[i];
	}
	int *result {sort_array(array)};
	cout << (result[0] - result[1]) + (result[1] - result[2]) << endl;
	return 0;
}
