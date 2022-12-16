#include <iostream>
using namespace std;

int main(){
	int arr[5] {1,5,10,20,100}, amount, x {4}, result {};
	cin >> amount;
	while (amount > 0 or x >= 0){
		if (arr[x] <= amount){
			amount -= arr[x];
			result++;
		} else {
			x--;
		}
	}
	cout << result << endl;
	return 0;
}
