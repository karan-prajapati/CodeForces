#include <iostream>
using namespace std;

int main(){
    int x, test_case;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        cin >> x;
        if (x % 2 == 0){
            cout << (x / 2) - 1 << endl;
        } else {
            cout << x / 2 << endl;
        }
    }
    return 0;
}
