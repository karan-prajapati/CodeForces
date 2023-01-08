#include <iostream>

using namespace std;

int main(){
    int n, x, y, k;
    cin >> n;
    for (; n > 0; n--){
        cin >> x >> y >> k;
        int result = k / x;
        if ((result * x) + y > k){
            result--;
        }
        while (((result * x) + y) % x != y){
            result--;
        }
        cout << (result * x) + y << endl;
    }
    return 0;
}
