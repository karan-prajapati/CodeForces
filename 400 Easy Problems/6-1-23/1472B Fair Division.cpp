#include <iostream>

using namespace std;

int main(){
    int test_case;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        int n, num, num_of_one {}, num_of_two {};
        cin >> num;
        for (int i = 0; i < num; i++){
            cin >> n;
            if (n == 1){
                num_of_one++;
            } else {
                num_of_two++;
            }
        }
        if (num_of_one % 2 != 0 or (num_of_two % 2 != 0 and num_of_one < 2)){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
