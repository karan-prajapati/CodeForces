#include <iostream>

using namespace std;

int main(){
    int test_case, num;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        cin >> num;
        int result {(num % 10 - 1) * 10 + 1}, count {2};
        for (int i = 0; i < 3; i++){
            if (num / 10 != 0){
                result += count;
                num /= 10;
            }
            count++;
        }
        cout << result << endl;
    }
    return 0;
}
