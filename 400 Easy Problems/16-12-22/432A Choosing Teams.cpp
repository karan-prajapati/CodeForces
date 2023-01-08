#include <iostream>

using namespace std;

int main(){
    int n, k, x, result {};
    cin >> n >> k;
    for (; n > 0; n--){
        cin >> x;
        if ((x + k) <= 5){
            result++;
        }
    }
    cout << result / 3 << endl;
    return 0;
}
