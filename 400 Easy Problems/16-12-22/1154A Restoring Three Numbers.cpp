#include <iostream>
#include <climits>

using namespace std;

int main(){
    int max_value {INT_MIN}, arr[4];
    for (int i = 0; i < 4; i++){
        cin >> arr[i];
        if (arr[i] > max_value){
            max_value = arr[i];
        }
    }
    for (int i = 0; i < 4; i++){
        if (arr[i] != max_value){
            cout << max_value - arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
