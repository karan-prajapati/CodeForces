#include <iostream>

using namespace std;

int main(){
    int test_case, x;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        cin >> x;
        int result = (x / 3);
        int check_1 = (x - (result * 2)) - result;
        int check_2 = (x - ((result + 1) * 2)) - (result + 1);

        if (check_2 < 0){ check_2 *= -1; }
        if (check_1 <= check_2) {
            cout << check_1 + result << " " << result << endl;
        } else {
            cout << check_2 + (result - 1) << " " << result + 1 << endl;
        }
    }
    return 0;
}
