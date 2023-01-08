#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np, min_value {INT_MAX};
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int arr[3] {(k*l) / nl, c*d, p / np};
    for (int i = 0; i < 3; i++){
        if (arr[i] < min_value){
            min_value = arr[i];
        }
    }
    cout << min_value / n << endl;
    return 0;
}
