#include <iostream>
#include <climits>

using namespace std;

int main(){
	int n, score_1 {}, score_2 {}, check {1};
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int i {}, x {n - 1};
	while (i <= x){
		if (arr[i] > arr[x]){
			if (check == 1){
				score_1 += arr[i];
				check = 0;
			} else {
				score_2 += arr[i];
				check = 1;
			}
			i++;
		} else {
			if (check == 1){
				score_1 += arr[x];
				check = 0;
			} else {
				score_2 += arr[x];
				check = 1;
			}
			x--;
		}
	}
	cout << score_1 << " " << score_2 << endl;
	return 0;
}
