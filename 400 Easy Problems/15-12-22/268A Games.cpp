#include <iostream>

using namespace std;

int main(){
    int x, result {};
    cin >> x;
    int arr[x][2];
    for (int i = 0; i < x; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            if (arr[i][0] == arr[j][1]){
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;
}
