#include <iostream>
#include <climits>

using namespace std;

int min_value(int array[], int index){
    int value {INT_MAX};
    for (int i = 0; i < index; i++){
        if (value > array[i]){
            value = array[i];
        }
    }
    return value;
}

int search_index(int array[], int index, int value){
    for (int i = 0; i < index; i++){
        if (array[i] == value){
            return i;
        }
    }
    return -1;
}

int value_count(int array[], int index, int value){
    int count {};
    for (int i = 0; i < index; i++){
        if (array[i] == value){
            count++;
        }
    }
    return count;
}

int main(){
    int n, result;
    cin >> n;
    int arr[n], count_array[3];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i < 4; i++){
        count_array[i - 1] = value_count(arr, n, i);
    }
    result = min_value(count_array, 3);
    cout << result << endl;
    for (int i = 0; i < result; i++){
        for (int j = 1; j < 4; j++){
            int k = search_index(arr, n, j);
            if (k != -1){
                cout << k + 1 << " ";
            }
            arr[k] = 0;
        }
        cout << endl;
    }
    return 0;
}
