#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    for (; n > 0; n--){
        cin >> x;
        int i {1}, result;
        while (x > 0){
            if (i % 3 == 0 || i % 10 == 3){
                i++;
                continue;
            } else {
                result = i;
            }
            i++;
            x--;
        }
        cout << result << endl;
    }
    return 0;
}
