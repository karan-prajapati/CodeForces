#include <iostream>
#include <climits>

using namespace std;

int min_value(int const *arr, int index){
    int value {INT_MAX}, min_ind;
    for (int i = 0; i < index; i++){
        if (arr[i] < value){
            value = arr[i];
        }
    }
    return value;
}

int main(){
    int test_case, value;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        cin >> value;
        int arr[value], max_value {INT_MIN};
        
        for (int i = 0; i < value; i++){
            cin >> arr[i];
            if (arr[i] > max_value){
                max_value = arr[i];
            }
        }
        cout << max_value - min_value(arr, value) << endl;
    }
    return 0;
}

