#include <iostream>

using namespace std;

int main(){
	int a, b, numer, div {1};
	cin >> a >> b;
	if (a < b){
		int temp = a;
		a = b;
		b = temp;
	}
	numer = (b - 1) + (6 - a);
	if (numer % 2 == 0) {
		div = 2;
	} else if (numer % 3 == 0){
		div = 3;
	}
	numer /= div;
	cout << numer << "/" << 6/div << endl;
	return 0;
}
