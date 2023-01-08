#include <iostream>
#include <climits>

using namespace std;

void sort_array(int arr[], int index){
    for (int i = 0; i < index - 1; i++){
        for (int j = i + 1; j < index; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int test_case, num;
    cin >> test_case;
    for (; test_case > 0; test_case--){
        cin >> num;
        int array[num], result {INT_MAX};
        for (int i = 0; i < num; i++){
            cin >> array[i];
        }
        sort_array(array, num);
        for (int i = num - 1; i >= 1; i--){
            int check = array[i] - array[i - 1];
            if (check < result){
                result = check;
            }
        }
        if (num == 2){
            result = array[1] - array[0];
        }
        cout << result << endl;
    }
    return 0; 
}
