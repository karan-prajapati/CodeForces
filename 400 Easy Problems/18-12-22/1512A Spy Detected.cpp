#include <iostream>

using namespace std;

int main(){
    int test_case, n, x;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++){
            if (arr[i] != arr[i + 1]){
                if (arr[i + 1] == arr[i + 2]){
                    cout << i + 1 << endl;
                } else {
                    cout << i + 2 << endl;
                }
                break;
            }
        }
    }
    return 0;
}
