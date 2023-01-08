#include <iostream>

using namespace std;

int get_diff(int a1, int b1){
    if (a1 - b1 < 0){
        return b1 - a1;
    }
    return a1 - b1;
}

int main(){
    int test_case, a, b, result, x, k;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        cin >> a >> b;
        k = 10;
        result = 0;
        x = get_diff(a, b);
        while (x > 0){
            if (x >= k){
                result += (x / k);
                x -= (x / k) * k;
            } else {
                k--;
            }
        }
        cout << result << endl;
    }
    return 0;
}
